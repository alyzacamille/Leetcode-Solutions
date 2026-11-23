// Time Complexity: O(n)
// Space Complexity: O(n)
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    // Initialize return array
    *returnSize = numsSize;
    int *sumArray = malloc(*returnSize * sizeof(int));

    // Iterate through nums array
    for (int i=0; i<numsSize; i++)
    {
        if (i == 0)
            sumArray[i] = nums[i];
        else
        {
            sumArray[i] = sumArray[i-1] + nums[i];
        }
    }
    return sumArray;
}
