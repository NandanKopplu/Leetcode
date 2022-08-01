class Solution
{
public:
    int numberOfMatches(int n)
    {
        int m = 0;
        int count = 0;
        while (n > 1)
        {
            if (n % 2 == 0)
            {
                m = n / 2;
                n = n / 2;
                count += m;
            }
            else
            {
                m = (n - 1) / 2;
                n = ((n - 1) / 2) + 1;
                count += m;
            }
        }
        return count;
    }
}