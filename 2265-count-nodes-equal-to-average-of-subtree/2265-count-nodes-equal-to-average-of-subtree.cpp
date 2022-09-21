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
    int ans = 0;
    int Tsum(int &cnt,TreeNode* root){
        if(root == NULL) return 0;
        
        cnt++;
        int lt =  Tsum(cnt, root -> left);
        int rt =  Tsum(cnt, root -> right);
        return (root -> val + lt + rt);
    }

    void avnd(TreeNode* root){
        if(root == NULL) return;
        int cnt = 0;
        int avg = (Tsum(cnt,root)) / cnt;
        if(root -> val == avg) ans++;
        avnd(root -> left);
        avnd(root -> right);
    }
    
    int averageOfSubtree(TreeNode* root) {
        ans = 0;
        avnd(root);
        return ans;
        
    }
};