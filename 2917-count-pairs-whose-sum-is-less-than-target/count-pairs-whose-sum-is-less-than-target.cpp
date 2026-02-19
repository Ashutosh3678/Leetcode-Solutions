class Solution {
public:
    int countPairs(vector<int>& a, int target) {
     
    sort(a.begin(), a.end());
    int ans = 0;
    int n = a.size();
    int l = 0, h = n - 1;
    while (l < h) {
        if (a[l] + a[h] < target) {
            ans += h - l;
            l++;
        }else h--;
    }
    return ans;
    }
};