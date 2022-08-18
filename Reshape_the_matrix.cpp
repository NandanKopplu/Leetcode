class Solution
{
public:
    vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
    {
        int i, j, m = mat.size(), n = mat[0].size(), x;

        if (m * n != r * c)
        {
            return mat;
        }
        else
        {
            vector<vector<int>> ans;
            vector<int> v;
            x = 0;

            for (i = 0; i < m; i++)
            {
                for (j = 0; j < n; j++)
                {
                    v.push_back(mat[i][j]);
                    x++;
                    if (x == c)
                    {
                        ans.push_back(v);
                        v.clear();
                        x = 0;
                    }
                }
            }
            return ans;
        }
    }
};