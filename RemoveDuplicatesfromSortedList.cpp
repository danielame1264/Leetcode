/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
        ListNode *dummy = head;
        if(head==NULL || head->next == NULL) return head;
        while(head!= NULL && head->next != NULL){
            if(head->val == head->next->val){
                //delete head->next;
                 head->next = head->next->next;
                // don't move forward
            }
            else if(head->next) head = head->next;
            else head = head;
        }
       return dummy; 
    }
    
};
