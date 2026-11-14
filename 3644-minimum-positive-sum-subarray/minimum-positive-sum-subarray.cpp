class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n=nums.size();
        int ans=INT_MAX;
        for(int i=0; i<n; i++){
            for(int len=l; len<=r; len++){
                if(i+len>n){
                    break;
                }
                int sum=0;
                for(int j=i; j<i+len; j++){
                    sum+=nums[j];
                }
                if(sum>0){
                    ans=min(ans,sum);
                }
            }
        }
        if(ans==INT_MAX){
            return -1;
        }
        return ans;
    }
};