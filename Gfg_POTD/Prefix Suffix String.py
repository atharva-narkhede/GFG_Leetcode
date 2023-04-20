#Given two Lists of strings s1 and s2, you have to count the number of strings in s2 which is either a suffix or prefix of at least one string of s1.

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
