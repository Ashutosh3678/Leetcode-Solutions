class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left=0;
        int right=0;
        int Sum = accumulate(nums.begin(), nums.end(), 0);
        if (Sum - nums[0] == 0)
            return 0;
        for(int i=1;i<nums.size();i++){
            left+=nums[i-1];
            right=Sum-left-nums[i];
            if(left==right)
            return i;
        }
        return -1;
    }
};