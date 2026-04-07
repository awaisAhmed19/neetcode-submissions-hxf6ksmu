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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length=0;
        ListNode* curr=head;
        while(curr!=nullptr){
            curr=curr->next;
            length++;
        }
        int removeind=length-n;
        if(removeind==0){
            return head->next;
        }
        curr=head;
        for(int i=0;i<length-n;i++){
            if(i+1==removeind){
                ListNode* temp=curr->next;
                curr->next=curr->next->next;
                delete temp;
            }
            curr=curr->next;
        }
        return head;
    }
};
