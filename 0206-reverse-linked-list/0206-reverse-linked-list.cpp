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
    private:
    ListNode* reverse1(ListNode* &head){
        //base case
        if(head == NULL || head->next == NULL){
            return head;
        }
        
        ListNode* chhotaHead = reverse1(head->next);
        
        head->next->next = head;
        head->next = NULL;
        
        return chhotaHead;
    }
public:
    ListNode* reverseList(ListNode* head) {
        
         return reverse1(head);
    }
};