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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        ListNode *l3=new ListNode(INT32_MAX);
        ListNode *dummyHeader = l3;
        while(l1 != NULL && l2 != NULL ){
            if(l1->val <= l2->val){
                l3->next=l1;
                l3=l3->next;
                l1=l1->next;
            }
            else{
                l3->next=l2;
                l3=l3->next;
                l2=l2->next;
            }
        }
        if(l1 != NULL){
            l3->next=l1;
        }
        else{
            l3->next=l2;
        }
        
        return dummyHeader->next;
    }

    
};


# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def mergeTwoLists(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        header = ListNode(0)
        dummy = header
        while l2!=None and l1!=None:
            if l1.val<=l2.val:
                header.next = l1
                header = header.next
                l1 = l1.next
            elif l2.val<l1.val:
                header.next = l2
                header = header.next
                l2 = l2.next
            
        if l1:
            header.next = l1
        elif l2:
            header.next = l2
        return dummy.next
        
        # if not l1: return l2
        # elif not l2: return l1
        # res = None
        # if l1.val > l2.val:
        #     res = l2
        #     res.next = self.mergeTwoLists(l1, l2.next)
        # elif l2.val > l1.val:
        #     res = l1
        #     res.next = self.mergeTwoLists(l1.next, l2)
        # return res
         
        
