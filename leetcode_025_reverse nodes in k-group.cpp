class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head || k==1) return head;
        ListNode dummy = ListNode(-1);
        ListNode *pre = &dummy, *cur= head;
        pre->next = head;
        while(true){
            int n = k;
            while(n && cur){
                cur = cur->next;
                n--;
            }
            if(n>0) break;
            pre = reverse(pre, cur);
            cur = pre->next;
        }
        return dummy.next;
    }
    ListNode * reverse(ListNode *head, ListNode *tail){// 如果tail为nullptr 也就是说翻转head之后的部分
        ListNode *last = head->next, *cur=last->next;
        while(cur != tail){
            last->next = cur->next;
            cur->next = head->next;
            head->next = cur;
            cur = last->next;
        }
        return last;
    }
};