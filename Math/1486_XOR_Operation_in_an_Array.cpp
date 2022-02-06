class Solution {
public:
    int xorzeroton(int n){
        int ans=n%4;
        if(ans==0) return n;
        if(ans==1) return 1;
        if(ans==2) return n+1;
        if(ans==3) return 0;
        return 0;
    }
    int xorrange(int l,int h){
        return xorzeroton(h)^xorzeroton(l-1);
    }
    int xorOperation(int n, int start) {
        int l=start>>1;
        int h=l+n-1;
        int ans=xorrange(l,h);
        ans<<=1;
        if((start%2!=0)&&(n%2==1)) ans=ans|1;
        return ans;
    }
};
