class Solution {
public:
    int findKthLargest(vector<int>& a, int k) {
        int i=a.size();
        sort(a.begin(),a.end());
        int ans=a[i-k];
        return ans;
    }
};