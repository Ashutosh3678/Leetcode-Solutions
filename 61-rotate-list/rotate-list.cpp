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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0)
            return head;
        vector<int>a;
        ListNode*t=head;
        while(t){
            a.push_back(t->val);
            t=t->next;
        }
        int n=a.size();
        k=k%n;
        vector<int>rot(n);
        for(int i=0;i<n;i++){
            rot[(i+k)%n]=a[i];
        }
        t=head;
        int i=0;
        while(t){
            t->val=rot[i];
            i++;
            t=t->next;
        }
        return head;
    }
};