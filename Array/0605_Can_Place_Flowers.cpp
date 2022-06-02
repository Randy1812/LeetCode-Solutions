class Solution {
public:
    bool canPlaceFlowers(vector<int>& ar, int n) {
        if(n==0){
            return true;
        }
        if(ar.size()==0){
            return false;
        }
        if(ar.size()==1){
            return (ar[0]==0 && n==1) || (ar[0]==1 && n==0);
        }
        for(int i=0;i<ar.size();i++){
            if(i==0){
                if(ar[0]==0 && ar[1]==0){
                    ar[i]=1;
                    n--;
                }
            }
            else if(i==ar.size()-1){
                if(ar[i]==0 && ar[i-1]==0){
                    ar[i]=1;
                    n--;
                }
            }
            else{
                if(ar[i-1]==0 && ar[i]==0 && ar[i+1]==0){
                    ar[i]=1;
                    n--;
                }
            }
            if(n==0) return true;
        }
        return false;
    }
};
