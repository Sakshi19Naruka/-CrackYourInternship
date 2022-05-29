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
   // Tortoise / 2 pointer method  here Time c-  O(N) as slow pointer have gone once through whole list before colliding and space - O(1)
    bool hasCycle(ListNode *head) { 
        if(head==NULL || head->next==NULL)
            return false;
        
        ListNode *slow = head;
        ListNode *fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
//Condition initialisation k baad slow & fast collide only when if there is cycle;            
            if(slow==fast)     
                return true;
        }
        return false;
    }
};

// O(N) and O(N)


// O(N)  and O(N)