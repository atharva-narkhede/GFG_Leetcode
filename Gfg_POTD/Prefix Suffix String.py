class Solution:
    def prefixSuffixString(self, s1, s2) -> int:
        prefixes = set()
        suffixes = set()
        for s in s1:
            for i in range(1, len(s)):
                prefixes.add(s[:i])
                suffixes.add(s[i:])
        count = 0
        for s in s2:
            if s in prefixes or s in suffixes:
                count += 1
        return count
