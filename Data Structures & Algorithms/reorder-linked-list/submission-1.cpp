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
    void reorderList(ListNode* head) {

        if (head == nullptr || head->next == nullptr) return;

        ListNode* wolny = head;
        ListNode* szybki = head->next; 
        
        while (szybki != nullptr && szybki->next != nullptr) {
            wolny = wolny->next;
            szybki = szybki->next->next;
        }

        ListNode* druga_polowa = wolny->next;
        
        wolny->next = nullptr; 

        ListNode* poprzedni = nullptr;
        ListNode* obecny = druga_polowa;
        
        while (obecny != nullptr) {
            ListNode* tymczasowy = obecny->next; 
            
            obecny->next = poprzedni;            
            
            poprzedni = obecny;                  
            obecny = tymczasowy;                 
        }

        ListNode* pierwsza = head;
        ListNode* druga = poprzedni;
        
        while (druga != nullptr) {
            ListNode* temp1 = pierwsza->next;
            ListNode* temp2 = druga->next;
            
            pierwsza->next = druga;
            druga->next = temp1;
            
            pierwsza = temp1;
            druga = temp2;
        }
    }
};