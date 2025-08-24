class Solution {
public:
    int dp(int index, int total, vector<int>& nums, int target) {
        if (index == nums.size()) {
            return (total == target) ? 1 : 0;
        }
        return dp(index + 1, total + nums[index], nums, target) 
             + dp(index + 1, total - nums[index], nums, target);
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        return dp(0, 0, nums, target);
    }
};