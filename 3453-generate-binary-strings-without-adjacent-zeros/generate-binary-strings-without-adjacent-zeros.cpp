class Solution {
public:
    vector<string>ans;
    void gen(int n,string s){
        if(s.size()==n){
            ans.push_back(s);
            return;
        }
        gen(n,s+'1');
        if(s.empty()||s.back()=='1')
        gen(n,s+'0');
    }
    vector<string> validStrings(int n) {
        gen(n,"");
        return ans;
    }
};