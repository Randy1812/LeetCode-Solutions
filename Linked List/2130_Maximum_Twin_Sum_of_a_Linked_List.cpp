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
    int pairSum(ListNode* head) {
        int n=0;
        ListNode *p=head;
        while(p!=NULL){
            n++;
            p=p->next;
        }
        p=head;
        for(int i=0;i<n/2-1;i++){
            p=p->next;
        }
        cout<<p->val;
        ListNode *q=p->next;
        p->next=NULL;
        ListNode *r=NULL;
        p=q;
        q=NULL;
        while(p!=NULL){
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        ListNode *rh=q;
        int sum=0;
        while(head!=NULL&rh!=NULL){
            sum=max(sum,head->val+rh->val);
            head=head->next;
            rh=rh->next;
        }
        return sum;
    }
};


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
    int pairSum(ListNode* head) {
        ListNode *p=head;
        vector<int> tmp;
        while(p!=NULL){
            tmp.push_back(p->val);
        }
        int i=0,j=tmp.size()-1,res=0;
        while(i<j){
            res=max(res,tmp[i++]+tmp[j--]);
        }
        return res;
    }
};
