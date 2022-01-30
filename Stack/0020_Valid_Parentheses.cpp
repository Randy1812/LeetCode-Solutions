class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(auto i:s){
           if(i==')' || i=='}' || i==']'){
               if(stk.empty()){
                   return false;
               }
               else{
                   if(stk.top()==i-1 || stk.top()==i-2){
                       stk.pop();
                   }
                   else{
                       return false;
                   }
               }
           }
           if(i=='(' || i=='{' || i=='['){
               stk.push(i);
           }
        }
        return stk.empty();
    }
};
