class Solution {
public:
    int minimumOperations(vector<int>& a) {
        int op=0;
        for(int i=0;i<a.size();i++){
            if(a[i]%3!=0){
                op++;
            }
        }
        return op;
    }
};