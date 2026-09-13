class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
        int n=nums.size();
        int evenSum=0;
        int oddSum=0;
        for(int i=0; i<n;i++){
            if(i%2==0)
                evenSum+=nums[i];
            else
                oddSum+=nums[i];
        }

        int leftEven=0;
        int leftOdd=0;
        int ans=0;
        
        for(int i=0; i<n; i++){
            //remove current element
            if(i%2==0)
                evenSum-=nums[i];
            else
                oddSum-=nums[i];

            //check equal
            int newEven=leftEven + oddSum;
            int newOdd=leftOdd + evenSum;
            if(newEven==newOdd)
            ans++;

            //add again
            if(i%2==0)
                leftEven+=nums[i];
            else
                leftOdd+=nums[i];
        }
        return ans;
    }
};