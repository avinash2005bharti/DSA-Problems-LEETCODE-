class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode* temp  = head;
        while(temp && temp->next){
            temp->val = temp->val ^ temp->next->val;
            temp->next->val = temp->val ^ temp->next->val;
            temp->val = temp->val ^ temp->next->val;
            temp = temp->next->next;
        }
    return head;
    }
};