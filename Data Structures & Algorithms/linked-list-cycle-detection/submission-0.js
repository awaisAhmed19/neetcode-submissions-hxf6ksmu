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
     * @return {boolean}
     */
    hasCycle(head) {
        let fastp=head;
        let slowp=head;

        while(fastp!==null && fastp.next!==null){
            fastp=fastp.next.next;
            slowp=slowp.next;

            if(slowp==fastp){
                return true;
            }
        }

        return false;
    }
}
