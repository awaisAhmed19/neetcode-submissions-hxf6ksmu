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
     * @param {ListNode} head
     * @return {void}
     */
    reorderList(head) {
        let fp=head.next,sp=head;
        while(fp!==null && fp.next!==null){
            sp=sp.next;
            fp=fp.next.next;
        }
        let sec= sp.next;
        let prev=(sp.next=null);

        while(sec!==null){
            let tmp=sec.next;
            sec.next=prev;
            prev=sec;
            sec=tmp;
        }   

        let first=head;
        sec=prev;
        while(sec!==null){
            const tmp1=first.next;
            const tmp2=sec.next;
            first.next=sec;
            sec.next=tmp1;
            first=tmp1;
            sec=tmp2;
        }
    }
}
