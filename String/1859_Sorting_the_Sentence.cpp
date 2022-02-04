class Solution {
public:
    string sortSentence(string s) {
        string res="",tp;
        map<int,string> sorter;
        stringstream ss(s);
        while(ss>>tp){
            sorter[tp[tp.length()-1]]=tp.substr(0,tp.length()-1);
        }
        for(auto i:sorter) res+=i.second+' ';
        return res.substr(0,res.length()-1);
    }
};
