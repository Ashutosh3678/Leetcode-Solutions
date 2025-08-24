class Solution {
public:
    bool closeStrings(string word1, string word2) {
        unordered_map<char, int> m1;
        unordered_map<char, int> m2;
        for (char c : word1) {
            m1[c]++;
        }
        for (char c1 : word2) {
            m2[c1]++;
        }
        if (m1.size() != m2.size()) return false;
        for (auto& p : m1) {
            if (m2.find(p.first) == m2.end()) return false;
        }
        vector<int> a, b;
        for (auto& p : m1) {
            a.push_back(p.second);
        }
        for (auto& s : m2) {
            b.push_back(s.second);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        for (int i = 0; i < a.size(); i++) {
            if (a[i] != b[i]) {
                return false;
            }
        }
        return true;
    }
};