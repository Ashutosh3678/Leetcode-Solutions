class Solution {
public:
    void print(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& subsets) {
        if (i == nums.size()) {
            subsets.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        print(nums, ans, i + 1, subsets);
        ans.pop_back();
        print(nums, ans, i + 1, subsets);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> subsets;
        vector<int> ans;
        print(nums, ans, 0, subsets);
        return subsets;
    }
};