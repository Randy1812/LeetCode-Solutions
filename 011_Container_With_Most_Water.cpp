class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxar=INT_MIN;
        int i=0,j=height.size()-1;
        while(i<j){
            int ar=(j-i)*min(height[i],height[j]);
            maxar=max(ar,maxar);
            if(height[j]>height[i])
                i++;
            else
                j--;
        }
     return maxar;
    }
};
