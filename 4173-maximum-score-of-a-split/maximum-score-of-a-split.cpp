class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        vector<long long>mini(nums.size());
        mini[nums.size()-1]=nums[nums.size()-1];
        long long score=0;
        long long maxi=LLONG_MIN;
        for(int i=nums.size()-2;i>=1;i--){
            mini[i]=min(mini[i+1],(long long )nums[i]);
        }
        long long sum=0;
        for(int i=0;i<nums.size()-1;i++){
            sum+=nums[i];
            score=sum-mini[i+1];
            maxi=max(maxi,score);
        }
        return maxi;
    }
};