class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ret;
        int y,x,i;
        for(i=0;i<n;i++)
        {
           y=nums[i];
           x=nums[i+n];
           ret.push_back(y);
           ret.push_back(x);
        }
        return ret;
    }
};