class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char,int>mp;
        for(char c:tasks){
            mp[c]++;
        }
        priority_queue<int>pq;
        for(auto x:mp){
            pq.push(x.second);
        }
        int time=0;
        while(!pq.empty()){
            vector<int>temp;
            for(int i=0; i<=n; i++){
                if(!pq.empty()){
                    int freq=pq.top();
                    pq.pop();
                    freq--;
                    if(freq>0){
                        temp.push_back(freq);
                    }
                }
                time++;
                if(pq.empty()&&temp.empty()){
                    break;
                }
            }
            for(int rem:temp){
                pq.push(rem);
            }
        }
        return time;    
    }
};