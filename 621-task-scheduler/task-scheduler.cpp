class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int p=tasks.size();
        unordered_map<char,int>mp;
        for(char c:tasks){
            mp[c]++;
        }
        int maxFreq=0;
        for(auto x:mp){
            if(x.second>maxFreq){
                maxFreq=x.second;
            }
        }
        int countMax=0;
        for(auto x:mp){
            if(x.second==maxFreq){
                countMax++;
            }
        }
        int formula=(maxFreq-1)*(n+1)+countMax;
        return max(p,formula);   
    }
};