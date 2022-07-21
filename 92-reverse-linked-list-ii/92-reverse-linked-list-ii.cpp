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
     ListNode* reverse(ListNode* head){
        
        ListNode* prev = NULL, *next = NULL, *current = head;
        while(current != NULL){
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;   
        }
        return prev;
    }
    
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        //Code start
        ListNode* curr=head, *prev=NULL;
        int cnt=1;
        while(cnt!=left){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        
        ListNode* start=curr;
        while(cnt!=right){
            curr=curr->next;
            cnt++;
        }
        
        ListNode* rest=curr->next;
        curr->next=NULL;
        ListNode* newHead = reverse(start);
        
        if(prev!=NULL){
            prev->next=newHead;
        }
        curr=newHead;
        
        while(curr->next!=NULL){
            curr=curr->next;
        }
        curr->next=rest;
        
        if(left==1)
            return newHead;
        else
            return head;
    }
};