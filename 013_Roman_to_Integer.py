class Solution:
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        roman = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
        res = 0
        prev = 0
        for c in s:
            curr = roman[c]
            res += curr
            if prev < curr:
                res -= 2 * prev
            prev = curr
        return res



s = Solution()
print(s.romanToInt('VI'))