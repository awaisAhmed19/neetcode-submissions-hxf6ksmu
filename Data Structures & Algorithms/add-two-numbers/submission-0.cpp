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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode* out=&dummy;
        int carry=0;
        while ((l1 != nullptr || l2 != nullptr) || carry != 0){
            int a=(l1)? l1->val:0;
            int b=(l2)? l2->val:0;
            int sum=a+b+carry;

            int tmp= sum%10;
            carry=(int)sum/10;
            out->next=new ListNode(tmp);
            out=out->next;
            // if(carry!=0 && l1->next==nullptr){
            //     out->next=new ListNode(carry);
            //     out=out->next;
            //     carry=0;
            // }
            if(l1) l1=l1->next;
            if(l2) l2=l2->next;
        }
        return dummy.next;
    }
};
