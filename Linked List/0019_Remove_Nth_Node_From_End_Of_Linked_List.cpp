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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL||head->next==NULL)return NULL;
        ListNode*p=head,*q,*r;
        for(int i=0;i<n;i++){
            if(p==NULL) return NULL;
            p=p->next;
        }
        if(!p)return head->next;
        q=head;
        while(p!=NULL){
            r=q;
            q=q->next;
            p=p->next;
        }
        r->next=q->next;
        return head;
    }
};
