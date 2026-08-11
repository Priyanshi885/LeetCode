class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int>mp;
        for(char c:s){
            mp[c]++;
        }

        priority_queue<pair<int,int>>pq;
        for(auto x:mp){
            pq.push({x.second,x.first});
        }

        string ans="";
        while(pq.size()>=2){
            auto first=pq.top();
            pq.pop();

            auto second=pq.top();
            pq.pop();

            ans+=first.second;
            ans+=second.second;

            first.first--;
            second.first--;

            if(first.first>0){
                pq.push(first);
            }
            if(second.first>0){
                pq.push(second);
            }
        }
        if(!pq.empty()){
            auto last=pq.top();
            pq.pop();
            if(last.first>1){
                return "";
            }
            ans+=last.second;
        }
        return ans;   
    }
};