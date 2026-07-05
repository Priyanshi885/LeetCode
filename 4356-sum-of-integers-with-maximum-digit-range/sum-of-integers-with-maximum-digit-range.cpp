class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int maxRange = -1;
        int sum =0;
        int n= nums.size();

        for(int i=0; i<n;i++){
            int temp = nums[i];
            int largest=0;
            int smallest=9;

            while(temp>0){
                int digit=temp%10;
                largest=max(largest,digit);
                smallest=min(smallest,digit);
                temp/=10;
            }

            int range=largest-smallest;

            if(range>maxRange){
                maxRange=range;
                sum=nums[i];
            }
            else if(range==maxRange){
                sum+=nums[i];
            }
        }
        return sum;
    }
};