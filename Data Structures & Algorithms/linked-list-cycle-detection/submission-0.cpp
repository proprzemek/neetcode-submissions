class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == nullptr) {
            return false;
        }
        

        ListNode* wolny = head;
        ListNode* szybki = head;
        

        while (szybki != nullptr && szybki->next != nullptr) {
            
            wolny = wolny->next;          
            szybki = szybki->next->next;  
            
            if (wolny == szybki) {
                return true; 
            }
        }
        
        return false;
    }
};