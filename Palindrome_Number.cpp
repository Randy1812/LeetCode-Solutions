class Solution {
public:
    bool isPalindrome(int x) {
        string st,rev;
        st = rev = to_string(x);
        reverse(rev.begin(),rev.end());
        return rev==st;
    }
};
