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
    ListNode* reverseList(ListNode* head) {
        ListNode* poprzedni = nullptr; 
        ListNode* obecny = head;       
        
        while (obecny != nullptr) {
            
            ListNode* nastepny = obecny->next;
            obecny->next = poprzedni;
            
            poprzedni = obecny;
            obecny = nastepny;
        }
        
        return poprzedni;
    }
};
