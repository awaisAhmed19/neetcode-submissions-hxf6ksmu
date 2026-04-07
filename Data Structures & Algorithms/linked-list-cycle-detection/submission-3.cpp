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
    bool hasCycle(ListNode* head) {
        ListNode* sp;
        ListNode* fp;
        sp=head;
        fp=head;
        while(fp!=nullptr && fp->next!=nullptr){
            fp=fp->next->next;
            if(fp==sp){
                return true;
            }
            sp=sp->next;
        }
        return false;   
    }
};
