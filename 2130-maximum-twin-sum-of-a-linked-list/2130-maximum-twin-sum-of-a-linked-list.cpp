/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
       ListNode* p = head;
       ListNode* q = head;
       while(p && p -> next){
           p = p -> next -> next;
           q = q -> next;
       }
    
       ListNode* nxt,*prev = NULL; 
       while(q){
           nxt = q -> next;
           q -> next = prev;
           prev = q;
           q = nxt;
       } 
        
        int mx = INT_MIN;
        
        while(prev){
            mx = max(mx,head -> val + prev-> val);
            head =  head -> next;
            prev =  prev -> next;
        }
        
        return mx;
    }
};