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
    int getDecimalValue(ListNode* head) {
        stack<int> st;
        ListNode *p=head;
        while(p!=NULL){
            st.push(p->val);
            p=p->next;
        }
        int num=0;
        int i=0;
        while(!st.empty()){
            num+=pow(2,i++)*st.top();
            st.pop();
        }
        return num;
    }
};
