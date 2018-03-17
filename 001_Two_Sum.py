class Solution:
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        numc = nums
        for i, a in enumerate(nums):
            for j, b in enumerate(numc):
                if a + b == target and i != j:
                    return [i, j]



s = Solution()
print(s.twoSum([1,2,3,4],7))
