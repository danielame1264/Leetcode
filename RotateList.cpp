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
    ListNode *rotateRight(ListNode *head, int k) {
        if(head==NULL || k==0 || head->next==NULL) return head;
        int temp= 0;
        ListNode *fck = head;
        while(fck!=NULL){
            fck=fck->next;
            temp++;
        }
        k = k%temp;
        if(temp == k || k==0) return head;
        
        
        //if(k==0) return head;
        ListNode *back = head;
        ListNode *front = head;
        while(k>0){
            front=front->next;
            k--;
        }
        while(front->next!= NULL){
            front = front->next;
            back = back->next;
        }
        ListNode *newfirst = back->next;
        back->next = NULL;
        front->next = head;
        return newfirst;
    }
};
