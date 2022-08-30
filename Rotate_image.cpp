class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        vector<vector<int>> mat2;
        int n = matrix.size();
        for (int i = 0; i < n; ++i)
        {
            vector<int> v;
            for (int j = n - 1; j >= 0; --j)
            {
                v.push_back(matrix[j][i]);
            }
            mat2.push_back(v);
        }
        matrix = mat2;
    }
};