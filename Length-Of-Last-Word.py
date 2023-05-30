class Solution(object):
    def lengthOfLastWord(self, s):
        arr = s.split()
        return len(arr[-1])

if __name__ == '__main__':
    s = Solution()
    print(s.lengthOfLastWord("Hello World"))
