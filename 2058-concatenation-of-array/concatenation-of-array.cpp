class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        int newLen = 2*n;

        vector<int>ans(newLen);

        //start filling first n numbers(index 0 to n-1)
        for(int i=0; i<n; i++){
            ans[i] = nums[i];
        }

        //start filling next n numbers(index n to newLen-1)
        for(int i=0; i<n; i++){
            ans[i+n] = nums[i];
        }
        
        return ans;
    }
};