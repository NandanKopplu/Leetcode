class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {

        int nSize = nums.size();
        int cSum = 0, maxSum = INT_MIN;
        for (int n : nums)
        {
            cSum = max(cSum + n, n);
            maxSum = max(maxSum, cSum);
        }
        return maxSum;
    }
};