class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int l1 = m - 1,l2 = n - 1,k = m + n - 1;
        
        while(l1 >= 0 && l2 >= 0){
            if(nums1[l1] < nums2[l2]){
                nums1[k--] = nums2[l2--];
            } else {
                nums1[k--] = nums1[l1--];
          }
        }
        
            while(l2 >= 0)
                nums1[k--] = nums2[l2--];
    }
};