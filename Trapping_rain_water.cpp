class Solution
{
public:
    int trap(vector<int> &height)
    {
        int l = 0, r = height.size() - 1, area = 0, lmax = 0, rmax = 0;
        while (l < r)
        {
            lmax = max(lmax, height[l]);
            rmax = max(rmax, height[r]);
            if (lmax < rmax)
            {
                area += lmax - height[l];
                l = l + 1;
            }
            else
            {
                area += rmax - height[r];
                r = r - 1;
            }
        }
        return area;
    }
};