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
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* lewy = dummy;
        ListNode* prawy = head;

        while (n > 0 && prawy != nullptr) {
            prawy = prawy->next;
            n--;
        }

        while (prawy != nullptr) {
            lewy = lewy->next;
            prawy = prawy->next;
        }

        ListNode* do_usuniecia = lewy->next;
        lewy->next = lewy->next->next;
        
        delete do_usuniecia;

        ListNode* nowa_glowa = dummy->next;
        
        delete dummy; 
        
        return nowa_glowa;
    }
};
