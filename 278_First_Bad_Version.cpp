// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l=0,h=n,m=0;
        while(l<h)
        {
            m = l + (h-l)/2;
            if(isBadVersion(m))
            {
                h = m;
            }
            else
            {
                l = m + 1;
            }
        }
        return l;
    }
};
