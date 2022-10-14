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
    ListNode* deleteMiddle(ListNode* head) {
        
        if(head -> next == nullptr) return nullptr;
        int cnt = 0;
        ListNode* temp1 = head,*temp2 = head,*cur = head;
        
        while(temp1 -> next != nullptr){
            cnt++;
            temp1 = temp1 -> next;
        }
        
        cnt = (cnt + 1) / 2;
        cnt--;
        
        while(cnt > 0){
            temp2 = temp2 -> next;
            cnt--;
        }
        cur = temp2 -> next;
        
        temp2 -> next = cur -> next;
        cur -> next = NULL;
        delete(cur);
        return head;
    }
};