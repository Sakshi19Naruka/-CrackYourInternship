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
        while(head != NULL){
            if(mp.find(head)==mp.end()){  //if not present then insert
                mp[head]++;
            }
            
            else{
                return true;    //if present then it means cycle is there
            }
            head = head->next;
        }
        return false;
    }
};

// O(N) and O(N)


// O(N)  and O(N)