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

    stack<int> stpush(ListNode* l){
        stack<int>s;
        while(l){
            s.push(l->val);
            l=l->next;
        }
        return s;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int>s1,s2;
        s1=stpush(l1);
        s2=stpush(l2);
        int c=0;
        ListNode*res=NULL;
        while(!s1.empty()  || !s2.empty()||c){
            int v1=0,v2=0;
            if(!s1.empty()){
                v1=s1.top();
                s1.pop();
            }

            if(!s2.empty()){
                v2=s2.top();
                s2.pop();
            }

            int sum=v1+v2+c;
            c=sum/10;
            ListNode* newNode = new ListNode(sum % 10);
            newNode->next=res;
            res=newNode;
        }
        return res;
    }
};