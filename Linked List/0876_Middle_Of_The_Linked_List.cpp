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
    ListNode* middleNode(ListNode* head) {
        int ct=0;
        ListNode* p=head;
        while(p!=NULL){
            ct++;
            p=p->next;
        }
        ct=ct%2==0?ct/2+1:(ct+1)/2;
        for(int i=0;i<ct-1;i++){
            head=head->next;
        }
        return head;
    }
};
