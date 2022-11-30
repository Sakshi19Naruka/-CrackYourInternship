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

// ###########Same as last 2 submissions but more organised to understand 
class Solution {
private:
    ListNode* getMid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head->next;
        
        //jb fast null pe aaya it means slow mid pr aya
        while(fast!=NULL && fast->next!=NULL){ 
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    
    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;
        
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
public:
    bool isPalindrome(ListNode* head) {
        if(head->next == NULL)
            return true;
        
        //step 1 finf middle node
        ListNode* middle = getMid(head);
        
        //step 2 reverse list after middle
        ListNode* temp = middle->next;
        middle->next = reverse(temp);
        
        //step 3  compare both halves
        ListNode* head1 = head;
        ListNode* head2 = middle->next;
        
        while(head2 != NULL){
            if(head1->val != head2->val)
                return false;
            else{
                head1 = head1->next;
                head2 = head2->next;
            }
        }
        
        //step 4 convert Linked list aa before (optional)
        temp = middle->next;
        middle->next = reverse(temp);
        
        return true;
    }
};