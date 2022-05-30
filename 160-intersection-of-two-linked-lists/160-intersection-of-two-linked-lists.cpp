/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

//BEST as well as SHORT APPROACH 
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL) 
            return NULL;
        
        ListNode *a=headA;
        ListNode *b=headB;
        
        //if a and b have different length, the we will stop the loop after second iteration
        
        //for the end of first iteration, we just reset the pointer to the head of another linkedlist
        while(a!=b){
            a = (a==NULL)? headB: a->next;
            b = (b==NULL)? headA: b->next;
        }
        return a;
    }
};

//Time Complexity : O(m + n)
//Space Complexity : O(1)