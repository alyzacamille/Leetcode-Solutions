// Time Complexity: O(m x n), where m = accountsSize & n = accountsColSize
// Space Complexity: O(1)
int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int max_wealth=0;
    for (int i=0; i<accountsSize; i++)
    {
        int curr_wealth=0;
        for (int j=0; j<*accountsColSize; j++)
        {
            curr_wealth+=accounts[i][j];
        }
        if (curr_wealth > max_wealth)
            max_wealth = curr_wealth;
    }
    return max_wealth;
}
