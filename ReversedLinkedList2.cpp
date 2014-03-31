everse a linked list from position m to n. Do it in-place and in one-pass.

For example:
Given 1->2->3->4->5->NULL, m = 2 and n = 4,

return 1->4->3->2->5->NULL.

Note:
Given m, n satisfy the following condition:
1 ≤ m ≤ n ≤ length of list.

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
    ListNode *reverseBetween(ListNode *head, int m, int n) {
        if(head ==NULL || head->next==NULL) return head;
        if(m==n) return head;
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        ListNode *cur = dummy;
        ListNode *back = dummy;
        ListNode *end = dummy;
        ListNode *terminate= dummy;
        int temp = 0;
        while(temp!= n+1){
            
            if(temp == m-1){
              back = cur;  
            }
            if(temp == n){
              end = cur;  
            }
        cur=cur->next;
           temp++;
        } 
        terminate=end->next;
        cur = back->next; // set it to the first one in the reversed chunk
        while(cur->next!=terminate){
            ListNode *rev = cur->next;
            ListNode *first = back->next;
            cur->next=cur->next->next;
            back->next = rev;
            rev->next = first;
        }
        
     return dummy->next;
    }
};
