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
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL)
            return NULL;
        ListNode* less = new ListNode(0);
        ListNode* more = new ListNode(0);
        ListNode* less_head = less;
        ListNode* more_head = more;
        
        while(head != NULL){
            if(head->val < x){
                less->next = head;
                less = less->next;
            }
            else{
                more->next = head;
                more = more->next;
            }
            head = head->next;
        }
        more->next = NULL;
        less->next = more_head->next;
        
        return less_head->next;
            
    }
};