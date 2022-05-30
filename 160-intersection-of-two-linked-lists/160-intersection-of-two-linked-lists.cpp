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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int cnt1=0, cnt2=0;
        ListNode *ptr1=headA;
        ListNode *ptr2=headB;
        while(ptr1!=NULL){
            cnt1++;           //find length of lsit1
            ptr1=ptr1->next;
        }
        while(ptr2!=NULL){
            cnt2++;           //find length of lsit2
            ptr2=ptr2->next;
        }
        int diff=abs(cnt1-cnt2);   //find difference of length
        
        if(cnt1>=cnt2){
            while(diff){
				headA = headA -> next;
				diff--;
			}
        }
        else{
             while(diff){
				headB = headB -> next;
				diff--;
			}
        }
       
        while(headA!=NULL && headB!=NULL){
            if(headA==headB)
                return headA;
            headA=headA->next;
            headB=headB->next;
        }
        return NULL;
    }
};

//Time Complexity : O(m + n)
//Space Complexity : O(1)