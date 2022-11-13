class Solution
{
public:
    bool isPalindrome(int x)
    {
        string rev = to_string(x);
        int start = 0;
        int size = rev.size();
        int end = size - 1;
        while (start <= end)
        {
            if (rev[start] != rev[end])
            {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};