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
class Solution {
public:
    int ind = 0;
    TreeNode* bstFromPreorder(vector<int>& preorder,int mx = INT_MAX) {
        if(ind == preorder.size() || preorder[ind] > mx) return NULL;
        
        auto node = new TreeNode(preorder[ind++]);
        node -> left = bstFromPreorder(preorder,node -> val);
        node -> right = bstFromPreorder(preorder,mx);
        return node;
    }
};