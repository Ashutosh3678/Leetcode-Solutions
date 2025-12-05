class Solution {
public:
    int countPartitions(vector<int>& a) {
        int sum=0;
        for(int i=0;i<a.size();i++){
            sum+=a[i];
        }
        if(sum%2==0)
        return a.size()-1;
        else
        return 0;
    }
};