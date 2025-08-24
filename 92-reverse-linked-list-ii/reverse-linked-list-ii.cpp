class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (left == right) return head;

        ListNode dummy(0);
        dummy.next = head;
        ListNode* prev = &dummy;

        for (int i = 1; i < left; i++) {
            prev = prev->next;
        }

        ListNode* curr = prev->next;
        ListNode* nextNode = nullptr;
        ListNode* reversePrev = nullptr;


        for (int i = 0; i <= right - left; i++) {
            nextNode = curr->next;
            curr->next = reversePrev;
            reversePrev = curr;
            curr = nextNode;
        }
        prev->next->next = curr; 
        prev->next = reversePrev;    

        return dummy.next;
    }
};
