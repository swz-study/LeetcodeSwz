class Solution {
public: 
    bool isPalindrome(ListNode* head) {
        if(head == NULL ||head->next == NULL)
            return true;
        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* pre = NULL;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        while(slow!=NULL){
            ListNode* next = slow->next;
            slow->next = pre;
            pre = slow;
            slow = next;
        }
        while(head!=NULL&& pre!=NULL){
            if(head->val != pre->val)
                return false;
            head = head->next;
            pre = pre->next;
        }
        return true;
    }
};
