class Solution
{
public:
    double average(vector<int> &salary)
    {
        sort(salary.begin(), salary.end());
        int n = salary.size();
        double sum = 0;
        for (int i = 1; i < n - 1; i++)
        {
            sum = sum + salary[i];
        }
        return sum / (n - 2);
    }
};