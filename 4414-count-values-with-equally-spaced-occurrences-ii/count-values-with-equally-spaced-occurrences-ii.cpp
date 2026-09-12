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
            if(pos.size()<3)
            continue;
            int gap= pos[1]-pos[0];
            bool special=true;
            for(int i=2; i<pos.size(); i++){
                if(pos[i]-pos[i-1]!=gap){
                    special = false;
                    break;
                }
            }
            if(special==true)
            ans++;
        }
        return ans;
    }
};