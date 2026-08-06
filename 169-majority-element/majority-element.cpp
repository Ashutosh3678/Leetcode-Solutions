class Solution {
public:
    int majorityElement(vector<int>& n) {
        int s=n.size();
        int maxi=INT_MIN;
        unordered_map<int,int>m;
        for(int i=0;i<s;i++){
            m[n[i]]+=1;
        }
        for(auto &p:m){
            maxi=max(maxi,p.second);
        }
        for(auto &p:m){
            if(p.second==maxi)
            return p.first;
        }
        return 0;
    }
};