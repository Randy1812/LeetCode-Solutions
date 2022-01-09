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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *res = NULL, *tmp;
        int num1,num2,min;
        while(l1 && l2){
            num1 = l1->val;
            num2 = l2->val;
            if(num1<=num2){
                min=num1;
                l1=l1->next;
            }
            else{
                min=num2;
                l2=l2->next;
            }
            if(res==NULL){
                res = new ListNode(min);
                tmp = res;
            }
            else{
                tmp->next = new ListNode(min);
                tmp = tmp->next;
            }

        }
        while(l1){
            if(res==NULL){
                res = new ListNode(l1->val);
                tmp = res;
            }
            else{
                tmp->next = new ListNode(l1->val);
                tmp = tmp->next;
            }
            l1=l1->next;
        }
         while(l2){
            if(res==NULL){
                res = new ListNode(l2->val);
                tmp = res;
            }
            else{
                tmp->next = new ListNode(l2->val);
                tmp = tmp->next;
            }
            l2=l2->next;
        }
        return res;
    }
};
