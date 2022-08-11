class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        for (auto i = nums2.begin(); i != nums2.end(); i++)
        {
            nums1.push_back(*i);
        }
        sort(nums1.begin(), nums1.end());
        if (nums1.size() % 2 == 0)
        {
            double ans;
            double middle = nums1.size() / 2;
            double x = nums1[middle];
            double y = nums1[middle - 1];
            ans = (x + y) / 2;
            return ans;
        }
        else
        {
            return nums1[nums1.size() / 2];
        }
    }
};