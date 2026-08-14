class Solution {
public:
    string reorganizeString(string s) {
        int n=s.size();
        unordered_map<char,int>mp;
        for(char c:s){
            mp[c]++;
        }
        int maxFreq=0;
        char maxChar;
        for(auto x:mp){
            if(x.second>maxFreq){
                maxFreq=x.second;
                maxChar=x.first;
            }
        }
        if(maxFreq>(n+1)/2){
            return "";
        }

        string ans(n, ' ');
        int idx=0;
        while(mp[maxChar]>0){
            ans[idx] =maxChar;
            idx+=2;
            mp[maxChar]--;
        }
        for(auto x:mp){
            char ch=x.first;
            while(mp[ch]>0){
                if(idx>=n){
                    idx=1;
                }
                ans[idx]=ch;
                idx+=2;
                mp[ch]--;
            }
        }
        return ans;
    }
    
};