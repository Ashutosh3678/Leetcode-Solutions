class Solution {
public:
    long long calculateScore(vector<string>& ins, vector<int>& values) {
        int i=0;
        long long score=0;
        vector<bool>visited(ins.size(),false);
        while(i<ins.size()){
            if(visited[i])
                break;

            visited[i]=true;
            if(ins[i]=="jump"){
                i+=values[i];
            }
            else if(ins[i]=="add"){
                score=score+values[i];
                i++;
            }
            else{
                i++;
            }
        }
        return score;
    }
};