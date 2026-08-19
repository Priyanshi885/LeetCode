class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>pq;
        vector<int>ans;
        int n=nums.size();
        for(int i=0; i<n; i++){
            pq.push({nums[i],i});
            //max element may not lie in current window
            while(!pq.empty() && pq.top().second <= i-k)
            pq.pop();
            //add answer when you have a complete window of size k
            if(i>=k-1){
                ans.push_back(pq.top().first);
            }
        }
         return ans;
    }
};