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
    
    void findpath(TreeNode* root, vector<vector<int>>& ans,vector<int> temp,int targetSum, int sum){
        if(!root) return;
        
        if(!root -> left && !root -> right){
            if(sum + root -> val == targetSum){
                temp.push_back(root -> val);
                ans.push_back(temp);
                return;
            }
        }
        sum += root -> val;
        temp.push_back(root -> val);
        
        findpath(root -> left, ans, temp, targetSum, sum);
        findpath(root -> right, ans, temp, targetSum, sum);
        
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> temp;
        int sum = 0;
        findpath(root,ans,temp,targetSum,sum);
        return ans;
    }
};