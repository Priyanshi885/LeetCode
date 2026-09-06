class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int final_position=n-1;
        for(int idx=n-2; idx>=0; idx--){
            if(idx + nums[idx] >= final_position){
                final_position=idx;
            }
        }
        if(final_position==0)
        return true;
        else
        return false;
    }
};