class Solution
{
public:
    vector<string> summaryRanges(vector<int>& nums)
    {
        vector<string> res;
        if(nums.size()==0) return res;
        int diff=nums[0]-0,st=nums[0],end=nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i]-i!=diff)
            {
                diff=nums[i]-i;
                end=nums[i-1];
                if(st==end)
                {
                    res.push_back(to_string(st));
                }
                else
                {
                    res.push_back(to_string(st) + "->" + to_string(end));
                }
                st=nums[i];
            }
        }
        end=nums[nums.size()-1];
        if(st==end)
        {
            res.push_back(to_string(st));
        }
        else
        {
            res.push_back(to_string(st) + "->" + to_string(end));
        }
        for(auto i: res)
        {
            cout<<i<<" ";
        }
        return res;
    }
};
