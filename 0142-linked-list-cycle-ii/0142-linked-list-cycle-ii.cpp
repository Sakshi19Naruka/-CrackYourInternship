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
    unordered_map<ListNode*, int> mp;
    ListNode *detectCycle(ListNode *head) {
        ListNode* temp = head;
        
        while(temp != NULL){
            if(mp.find(temp) == mp.end()){ //check for temp not temp ka data bcox duplicate value bhi ho skti h
                mp[temp]++;
            }
            else{
                return temp;
            }
            temp = temp->next;
        }
        return NULL;
    }
};