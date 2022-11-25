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
    TreeNode* solve(vector<int>& nums, int low, int high){
        
        if(low > high) return NULL;
        
        int mid = (low + high) >> 1;
        TreeNode* newNode = new TreeNode();
        newNode -> val = nums[mid];
        newNode -> left = solve(nums,low,mid - 1);
        newNode -> right = solve(nums,mid + 1, high);
        return newNode;
        
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        return solve(nums,0,n - 1);
    }
};