class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        int n = nums.size();
        if (n % k != 0) return false;
        int group = n / k;
        unordered_map<int, int> m;
        for (int num : nums) {
            m[num]++;                 
        }

        bool check = true;
        for (auto& it : m) {
            if (it.second > group) {  
                check = false;
                break;
            }
        }
        return check;
    }
};
