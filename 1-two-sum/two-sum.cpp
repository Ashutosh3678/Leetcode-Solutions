class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        vector<int> res(2, 0);
        unordered_map<int, int> m;
        int f, s;
        for (int i = 0; i < a.size(); i++) {
            f = a[i];
            s = target - f;
            if (m.find(s) != m.end()) {
                res = {i, m[s]};
            }
            m[f] = i;
        }
        return res;
    }
};