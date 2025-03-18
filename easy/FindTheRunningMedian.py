from heapq import heappush, heappop

class MedianFinder:
    def __init__(self):
        self.minHeap = []
        self.maxHeap = []

    def addNum(self, num: int):
        heappush(self.maxHeap, -num)
        heappush(self.minHeap, -heappop(self.maxHeap))
        if len(self.minHeap) > len(self.maxHeap):
            heappush(self.maxHeap, -heappop(self.minHeap))

    def findMedian(self) -> float:
        if len(self.maxHeap) > len(self.minHeap):
            return -self.maxHeap[0]
        return (-self.maxHeap[0] + self.minHeap[0]) / 2

if __name__ == '__main__':
    a = map(int, input().split())
    obj = MedianFinder()
    b=[]
    for i in a:
        obj.addNum(i)
        b.append(obj.findMedian())
    print(*b)

'''Test case
Ex1:
Input: 1 5 10 21 9 2 99
Output: 1 3.0 5 7.5 9 7.0 9
Ex2:
Input: 1 5 10 21 9 2 99 3
Output: 1 3.0 5 7.5 9 7.0 9 7.0
'''
