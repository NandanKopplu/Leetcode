class Solution
{
public:
    int rob(vector<int> &cost)
    {
        int n = cost.size();
        if (n == 1)
        {
            return cost[0];
        }
        vector<int> dp(n + 1, 0);
        dp[0] = cost[0];
        dp[1] = cost[1];
        for (int i = 2; i < n; i++)
        {
            for (int j = i - 2; j >= 0; j--)
            {
                dp[i] = max(dp[i], dp[j] + cost[i]);
            }
        }
        return *max_element(dp.begin(), dp.end());
    }
};