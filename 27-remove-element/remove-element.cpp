class Solution {
public:
    int removeElement(vector<int>& a, int val) {
        int k=0;
        for(int i=0;i<a.size();i++){
            if(a[i]!=val){
                a[k]=a[i];
                k++;
            }
        }
        return k;
    }
};