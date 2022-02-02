class Solution {
public:
    int titleToNumber(string columnTitle) {
        int num=0;
        for(int i=0;i<columnTitle.size();i++){
            num+=pow(26,columnTitle.size()-i-1)*(columnTitle[i]-'A'+1);
        }
        return num;
    }
};


class Solution {
public:
    int titleToNumber(string columnTitle) {
        int num=0;
        for(auto i:columnTitle){
            num=num*26+(i-64);
        }
        return num;
    }
};
