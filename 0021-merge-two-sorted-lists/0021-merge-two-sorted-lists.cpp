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
    ListNode* solve(ListNode* &head1, ListNode* &head2){
        //if only 1 element is present in list 1
        if(head1->next == NULL){
             head1->next = head2;
             return head1;
        }
       
        ListNode* prev = head1;
        ListNode* curr = prev->next;
        ListNode* temp = head2; 
        while(curr != NULL && temp != NULL){
            if((temp->val >= prev->val) && (temp->val <= curr->val)){
                ListNode* nodeToShift = temp;
                temp = temp->next;
                prev->next = nodeToShift;
                nodeToShift->next = curr;
                prev = nodeToShift;
            }
            else{
                prev = curr;
                curr = curr->next;
                if(curr == NULL){
                    prev->next = temp; 
                    return head1;
                } 
            }
        }
        
        return head1;
    }
    
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
        if(head1 == NULL){
            return head2;
        }
        else if(head2 == NULL){
            return head1;
        }
        
        if(head1->val <= head2->val){
            return solve(head1, head2);
        }
        else{
            return solve(head2, head1);
        }
        
    }
};