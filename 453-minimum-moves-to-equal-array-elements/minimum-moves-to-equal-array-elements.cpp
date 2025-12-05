class Solution {
public:
    int minMoves(vector<int>& a) {
        int mini = a[0];
        for (int i = 0; i < a.size(); i++) {
            mini = min(mini, a[i]);
        }
        int ans = 0;
        for (int i = 0; i < a.size(); i++) {
            ans += a[i] - mini;
        }
        return ans;
    }
};