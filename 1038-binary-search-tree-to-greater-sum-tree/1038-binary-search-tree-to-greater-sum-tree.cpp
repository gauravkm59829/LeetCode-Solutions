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
    
    int rev(TreeNode* root, int &sum){
        if(!root) return 0;
        
        rev(root -> right, sum);
        
        root -> val += sum;
        sum = root -> val;
        
        rev(root -> left, sum);
        
        return sum;
    }
    TreeNode* bstToGst(TreeNode* root) {
        int sum = 0;
        rev(root , sum);
        
        return root;
    }
};