class Solution(object):
    def longestCommonPrefix(self, strs):
        if not strs:
            return ""
        shortest = min(strs, key=len)

        for i, c in enumerate(shortest):
            for str in strs:
                if str[i] != c:
                    return shortest[0:i]
        return shortest

if __name__ == '__main__':
    s = Solution()
    a = ["flower","flow","flight"]
    print(s.longestCommonPrefix(a))