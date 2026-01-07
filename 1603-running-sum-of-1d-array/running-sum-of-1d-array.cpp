class Solution {
public:
    vector<int> runningSum(vector<int>& a) {
        int sum;
        for(int i=0;i<a.size()-1;i++){
            sum=a[i]+a[i+1];
            a[i+1]=sum;
        }
        return a;
    }
};