// Time Complexity: O(n)
// Space Complexity: O(n)
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    char** answer=malloc(n * sizeof(char*));
    for (int i=1; i<=n; i++)
    {
        char* string=malloc(12 * sizeof(char));
        if ((i % 3 == 0) && (i % 5 == 0))
            snprintf(string, 12, "FizzBuzz");
        else if (i % 3 == 0)
            snprintf(string, 12, "Fizz");
        else if (i % 5 == 0)
            snprintf(string, 12, "Buzz");
        else
            snprintf(string, 12, "%d", i);
        answer[i-1] = string;
    }
    *returnSize = n;
    return answer;
}
