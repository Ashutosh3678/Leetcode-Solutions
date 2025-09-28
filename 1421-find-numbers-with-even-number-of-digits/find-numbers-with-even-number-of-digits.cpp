class Solution {
public:
    int findNumbers(vector<int>& nums) {
       int ans = 0;
       for (int i : nums) {
           if (i >= 10 && i <= 99) ans++;
           else if (i >= 1000 && i <= 9999) ans++;
           else if (i >= 100000 && i <= 999999) ans++;
           else if (i >= 10000000 && i <= 99999999) ans++;
           else if (i >= 1000000000) ans++;
       }
       return ans;
    }
};