class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> tmp;
        int tp1,tp2;
        for(auto i: ops){
           if(i=="+"){
                tp1=tmp.top();
                tmp.pop();
                tp2=tmp.top();
                tmp.push(tp1);
                tmp.push(tp1+tp2);
            }
            else if(i=="D"){
                tp1=tmp.top();
                tmp.push(2*tp1);
            }
            else if(i=="C"){
                tmp.pop();
            }
            else{
                tmp.push(stoi(i));
            }
        }
        tp1=0;
        while(!tmp.empty()){
            tp1+=tmp.top();
            tmp.pop();
        }
        return tp1;
    }
};
