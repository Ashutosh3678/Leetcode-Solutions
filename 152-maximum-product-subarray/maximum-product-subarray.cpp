class Solution {
public:
    int maxProduct(vector<int>& a) {
        int cs=1;
        int ms=INT_MIN;
          for(int val:a){
            cs*=val;
            ms=max(ms,cs);
            if(cs==0){
                cs=1;
            }
        }
        cs=1;
        for(int i=a.size()-1;i>=0;i--){
            cs*=a[i];
            ms=max(ms,cs);
            if(cs==0){
                cs=1;
            }
        }
        return ms;
    }
};