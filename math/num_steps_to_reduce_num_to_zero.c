// Time Complexity: O(logn)
// Space Complexity: O(1)
int numberOfSteps(int num) {
    int num_steps=0;
    while (num > 0)
    {
        if (num % 2 == 0)
        {
            num /= 2;
            num_steps++;
        }
        else
        {
            num -= 1;
            num_steps++;
        }
    }
    return num_steps;
}
