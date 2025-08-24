class Solution {
public:
    vector<int> findDuplicates(vector<int>& a) {
        int i = 0;
        vector<int>ans;
        while (i < a.size()) {
            int correct = a[i]-1; 
            if (a[i] != a[correct]) {
                swap(a[i], a[correct]);
            } else {
                i++;
            }
        }
        for (int i = 0; i < a.size(); i++) {
            if (a[i] != i+1) {
                ans.push_back(a[i]);
            }
        }
        return ans;
    }
};