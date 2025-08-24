class Solution {
public:
    int findDuplicate(vector<int>& a) {
        int i=0;
        int ans;
         while (i < a.size()) {
            int correct = a[i]-1; 
            if (a[i] != a[correct]) {
                swap(a[i], a[correct]);
            } 
            else {
                i++;
            }
        }
        for(int i=0;i<a.size();i++){
            if(a[i]!=i+1){
                ans=a[i];
                break;
            }
        }
        return ans;
    }
};