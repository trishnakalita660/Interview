class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(!l1) return l2;
        if(!l2) return l1;

        int add = l1->val+l2->val;
        ListNode* a = new ListNode(add%10);

        a->next = addTwoNumbers(l1->next, l2->next);
        if(add>9){
            a->next = addTwoNumbers(a->next, new ListNode(1));
        }

       return a;

    }
};