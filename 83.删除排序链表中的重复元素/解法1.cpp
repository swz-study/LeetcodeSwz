class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head== nullptr)
            return head;
        ListNode* cur = head,*next;
        while((next=cur->next)!=nullptr)
            if(cur->val == next->val)
                cur->next = next->next;
            else
                cur = next;
        return head;
    }
};
