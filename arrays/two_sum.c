// Time Complexity: O(n^2)
// Space Complexity: O(1)
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    
    // Initialize returnSize
    *returnSize = 2;
    
    // Initialize return array
    int *returnArr = malloc(*returnSize * sizeof(int));
    
    // Iterate through nums array
    for (int i=0; i<numsSize; i++) {
        for (int j=(i+1); j<numsSize; j++){
            // Check if elements equals target
            if (nums[i] + nums[j] == target) {
                returnArr[0] = i;
                returnArr[1] = j;
                return returnArr;
            }
        }
    }
    return 0;
}
