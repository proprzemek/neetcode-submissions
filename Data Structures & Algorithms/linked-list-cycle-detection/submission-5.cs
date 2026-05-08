/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public int val;
 *     public ListNode next;
 *     public ListNode(int val=0, ListNode next=null) {
 *         this.val = val;
 *         this.next = next;
 *     }
 * }
 */

public class Solution {
    public bool HasCycle(ListNode head) {
        if(head == null) return false;
        ListNode bunny = head;
        ListNode turtle = head;
        while(bunny != null && bunny.next != null){
            turtle = turtle.next;
            bunny = bunny.next.next;
            if(bunny == turtle){
                return true;
            }
        }
        return false;
    }
}
