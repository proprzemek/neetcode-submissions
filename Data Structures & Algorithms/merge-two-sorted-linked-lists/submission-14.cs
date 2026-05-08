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
    public ListNode MergeTwoLists(ListNode list1, ListNode list2) {
        ListNode prev = new ListNode(0);
        ListNode zapis = prev;
        
        while(list1 != null && list2 != null){
            if(list1.val <= list2.val){
                zapis.next = list1;
                list1 = list1.next;    
            }
            else{
                zapis.next = list2;
                list2 = list2.next;
            }
            zapis = zapis.next;
        }

        if(list1 != null){
            zapis.next = list1;
        } else if(list2 != null){
            zapis.next = list2;
        }
        return prev.next;
    }
}