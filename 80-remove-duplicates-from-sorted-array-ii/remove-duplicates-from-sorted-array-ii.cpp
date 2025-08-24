class Solution {
public:
    int removeDuplicates(vector<int>& a) {
         int k=2;
        if(a.size()<=2){
            return a.size();
        }
        for(int i=2;i<a.size();i++){
            if(a[i]!=a[k-2]){
                    a[k++]=a[i];
                    
            }
        }
         return k;
    }
};