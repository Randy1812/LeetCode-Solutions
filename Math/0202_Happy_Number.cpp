class Solution {
public:
    bool isHappy(int n) {
        vector<int> app;
        int sum=n;
        while(sum!=1 && find(app.begin(),app.end(),sum)==app.end()){
            app.push_back(sum);
            n=sum;
            sum=0;
            while(n!=0){
                int rem = n%10;
                sum += pow(rem,2);
                n /= 10;
            }
        }
        return sum==1;
    }
};
