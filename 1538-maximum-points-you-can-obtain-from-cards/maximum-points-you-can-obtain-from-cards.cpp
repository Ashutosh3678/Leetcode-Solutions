class Solution {
public:
    int maxScore(vector<int>& a, int k) {
        int l=0;
        int r=0;
        int ms=0;
        for(int i=0;i<k;i++){
            l=l+a[i];
            ms=l;
        }
        int ridx=a.size()-1;
        for(int i=k-1;i>=0;i--){
            l=l-a[i];
            r=r+a[ridx];
            ms=max(ms,l+r);
            ridx--;
        }
        return ms;
        
    }
};