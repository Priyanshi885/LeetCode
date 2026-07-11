class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        
        unordered_map<int,int>mp;
        long long sum=0;
        long long ans=0;
        int n=nums.size();

        //first window
        for(int i=0; i<k; i++){
            sum+=nums[i];
            mp[nums[i]]++;
        }

        if(mp.size()==k){
            ans=sum;
        }

        //sliding window
        for(int i=k; i<n; i++){
            //add new element
            sum+=nums[i];
            mp[nums[i]]++;

            //remove left element
            sum-=nums[i-k];
            mp[nums[i-k]]--;

            if(mp[nums[i-k]]==0)
            mp.erase(nums[i-k]);

            //check if all elements are distinct
            if(mp.size()==k)
            ans= max(ans,sum);
        }
        return ans;
    }
};