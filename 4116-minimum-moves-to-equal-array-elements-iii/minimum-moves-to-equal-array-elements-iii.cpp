class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int max_element=nums[0];
        for(int i=1; i<n; i++){
            if(nums[i]>max_element){
                max_element=nums[i];
            }
        }
        int sum=0; 
        for(int i=0; i<n; i++){
            sum+=nums[i];
        }
        int ans=(max_element*n)-sum;
        return ans;
        
    }
};