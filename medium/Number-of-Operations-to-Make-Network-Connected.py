from collections import defaultdict
from typing import List


class Solution:
    def makeConnected(self, n: int, connections: List[List[int]]) -> int:
        self.adj = defaultdict(list)

        for a, b in connections:
            self.adj[a].append(b)
            self.adj[b].append(a)

        self.visited = [False] * n

        connected = 0
        minRequired = 0
        for node in range(0, n):
            if self.visited[node]:
                continue

            connected += 1
            count = self.dfs(node)
            minRequired += count - 1

        return connected - 1 if (len(connections) - minRequired) >= (connected - 1) else -1


    def dfs(self, node):
        if self.visited[node]:
            return 0

        self.visited[node] = True
        count = 1
        for neigh in self.adj[node]:
            count += self.dfs(neigh)

        return count

if __name__ == '__main__':
    sol = Solution()
    result = sol.makeConnected(6, [[0, 1], [0, 2], [0, 3], [1, 2], [1, 3]])
    print(result)