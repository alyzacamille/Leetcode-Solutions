class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        numsSeen = {}
        for i in range(len(nums)):
            num = target - nums[i]
            if num in numsSeen:
                return [numsSeen[num], i]
            else:
                numsSeen[nums[i]] = i
        return [0, 0]
