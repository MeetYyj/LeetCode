import math

class Solution:
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        revx = int(str(abs(x))[::-1])
        if revx > pow(2, 31):
            return 0
        else:
            return revx * ((x > 0) - (x < 0))



s = Solution()
print(s.reverse(12001))
