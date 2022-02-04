class Solution {
public:
    vector<int> minOperations(string boxes) {
        int nb=0;
        vector<int> res(boxes.size());
        for(int i=0;i<boxes.size();i++){
            if(boxes[i]=='1'){
                nb++;
                res[0]+=i;
            }
        }
        int numl=0,numr=nb;
        if(boxes[0]=='1'){
            numr--;
            numl++;
        }
        for(int i=1;i<boxes.size();i++){
            res[i]=res[i-1]+numl-numr;
            if(boxes[i]=='1'){
                numr--;
                numl++;
            }
        }
        return res;
    }
};
