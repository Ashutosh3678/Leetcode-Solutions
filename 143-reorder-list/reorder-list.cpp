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
        ListNode*s=head;
        ListNode*f=head;
        while(f && f->next){
            s=s->next;
            f=f->next->next;
        }

        ListNode* p=NULL;
        ListNode*c=s->next;
        ListNode*n;
        while(c){
            n=c->next;
            c->next=p;
            p=c;
            c=n;
        }
        s->next=NULL;
        ListNode*first=head;
        ListNode*second=p;
        while(second){
            ListNode*t1=first->next;
            ListNode*t2=second->next;
            first->next=second;
            second->next=t1;
            first=t1;
            second=t2;
        }
    }
};