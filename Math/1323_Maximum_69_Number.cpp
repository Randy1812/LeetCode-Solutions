class Solution {
public:
    int maximum69Number (int num) {
        stack<int> nums;
        while(num>0){
            nums.push(num%10);
            num/=10;
        }
        bool chk=true;
        while(!nums.empty()){
            if(chk and nums.top()==6){
                num=num*10+9;
                chk=false;
            }
            else{
                num=num*10+nums.top();
            }
            nums.pop();
        }
        return num;
    }
};
