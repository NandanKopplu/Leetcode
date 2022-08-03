class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int i = 0;
        while (nums[i] != nums[i + 1])
        {
            i++;
        }
        return nums[i];
    }
}