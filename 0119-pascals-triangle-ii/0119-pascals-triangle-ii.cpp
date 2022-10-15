class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> r{1},cur{1};
        for(int i=1 ; i<=rowIndex ; i++)
        {
            r.push_back(1);
            for(int j=1 ; j<i ; j++)
            {
                r[j] = cur[j-1] + cur[j];
            }
            cur = r;
        }
        return cur;
    }
};