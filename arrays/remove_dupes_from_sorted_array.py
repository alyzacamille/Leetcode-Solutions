# Time Complexity: O(n)
# Space Complexity: O(n)
class Solution:
    def removeDuplicates(self, nums: list[int]) -> int:
        if len(nums) < 2:
            return len(nums)
        
        curr = nums[0]
        replace_index = 1
        uniq_nums = 1
        
        for i in range(1, len(nums)):
            if nums[i] != curr:
                curr = nums[i]
                nums[replace_index] = curr
                replace_index += 1
                uniq_nums += 1
        return uniq_nums
