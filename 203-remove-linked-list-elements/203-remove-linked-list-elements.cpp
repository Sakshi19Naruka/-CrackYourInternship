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
    ListNode* removeElements(ListNode* head, int value) {
        // 0 Node
        if(head == NULL)
            return head;
        else if(head->next == NULL  &&  head->val == value){
            head = NULL;
            return head;
        }
        
        ListNode* temp1 = head;
        ListNode* temp2 = head;
        while(temp1 != NULL){
            if(head->val == value){
                head=head->next;
                temp1=head->next;
                temp2=head;
            }
            else if(temp1->val==value){
                temp1=temp1->next;
                temp2->next = temp1;
            }
            else{
                temp2=temp1;
                temp1=temp1->next;
            }
        }
        if(head->val == value){
            head=NULL;
            return head;
        }
        return head;
    }
};               