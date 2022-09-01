/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
    int ans = 0;
    int pre(TreeNode *r, int mx)
    {
        if (!r)
        {
            return 0;
        }
        if (r->val >= mx)
        {
            ans++;
            mx = r->val;
        }
        pre(r->left, mx);
        pre(r->right, mx);
        return ans;
    }

public:
    int goodNodes(TreeNode *root)
    {
        ans = pre(root, INT_MIN);
        return ans;
    }
};