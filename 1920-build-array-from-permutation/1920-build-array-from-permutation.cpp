class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int>rev;
        int i,x;
        int n=nums.size();
        for(i=0;i<n;i++)
        {
            x=nums[nums[i]];
            rev.push_back(x);
        }
        return rev;
    }
};