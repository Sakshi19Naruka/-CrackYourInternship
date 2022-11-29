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
    bool hasCycle(ListNode *head) {
        ListNode* temp = head;
        while(temp != NULL){
            if(mp.find(temp) == mp.end()){  //if not present then insert in map
                mp[temp]++;
            }
            else{
                return true;    //if found then it means it is circular 
            }
            
            temp = temp->next;
        }
        return false;
    }
};