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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int num1,num2,sum=0,carry=0;
        ListNode *res=NULL,*tmp=NULL;
        while(l1||l2||carry){
            num1=l1?l1->val:0;
            num2=l2?l2->val:0;
            sum=num1+num2+carry;
            carry=0;
            if(sum>=10){
                carry=1;
                sum-=10;
            }
             if(res==NULL){
                res = new ListNode(sum);
                tmp = res;
            }
            else{
                tmp->next = new ListNode(sum);
                tmp = tmp->next;
            }
            if(l1){
                l1=l1->next;
            }
            if(l2){
                l2=l2->next;
            }
        }
        return res;
    }
};
