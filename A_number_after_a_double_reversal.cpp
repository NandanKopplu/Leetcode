class Solution
{
public:
    bool isSameAfterReversals(int num)
    {
        int o = num;
        int dig = 0;
        while (num != 0)
        {
            int n = num % 10;
            dig = dig * 10 + n;
            num = num / 10;
        }
        int a = 0;
        while (dig != 0)
        {
            int p = dig % 10;
            a = a * 10 + p;
            dig = dig / 10;
        }
        if (a == o)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};