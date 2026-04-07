/**
 * Definition for singly-linked list.
 * class ListNode {
 *     constructor(val = 0, next = null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */

class Solution {
    /**
     * @param {ListNode} list1
     * @param {ListNode} list2
     * @return {ListNode}
     */
    mergeTwoLists(list1, list2) {
        const dummy={val:0,next:null};
        let res=dummy;
        while(list1 && list2){
            if(list1.val<=list2.val){
                res.next=list1;
                list1=list1.next;
            }else{
                res.next=list2;
                list2=list2.next;
            }
            res=res.next;
        }
            if(list1){
                res.next=list1;
            }
            else{
                res.next=list2;
            }
        
        return dummy.next;
    }
}
