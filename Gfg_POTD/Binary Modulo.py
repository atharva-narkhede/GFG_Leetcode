#Binary Modulo Gfg potd problem of the day 8 may
#PYTHON 
#You are given a binary string s and an integer m. You need to return an integer r. Where r = k%m, k is the binary equivalent of string s.


class Solution:
    def modulo(self, s, m):
        k = int(s, 2)  # Convert binary string to decimal directly
        r = k % m
        return r
