class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,vector<int>>mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]].push_back(i);
        }
        int ans=0;
        for(auto x:mp){
            vector<int>pos=x.second;
            if(pos.size()!=3)
            continue;
            if(pos[1]-pos[0]!=pos[2]-pos[1])
            continue;
            ans++;
        }
        return ans;
    }
};