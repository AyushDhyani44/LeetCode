class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        int result = 0;
        int size = nums.size();
        for (int i = 0; i < size - 1; i += 2) {
            result += nums[i];
        }
        return result;
    }
};