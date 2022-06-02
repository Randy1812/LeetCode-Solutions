class Solution {
public:
    string toGoatLatin(string sentence) {
        vector<string> tp;
        stringstream ss(sentence);
        string tmp,res;
        while(ss>>tmp){
            tp.push_back(tmp);
        }
        for(int j=0;j<tp.size();j++){
            string i = tp[j];
            tmp="";
            char c = tolower(i[0]);
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
                tmp=i+"ma";
            }
            else{
                tmp=i.substr(1)+i.substr(0,1)+"ma";
            }
            for(int k=0;k<j+1;k++) tmp+='a';
            res.append(tmp);
            if(j!=tp.size()-1) res.append(" ");
        }
        return res;
    }
};
