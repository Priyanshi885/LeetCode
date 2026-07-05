class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        int maxRange = -1;
        int sum=0;

        for(int num:nums){
            int temp = num;
            int largest =0;
            int smallest =9;

            while(temp>0){
                int digit = temp%10;
                largest=max(largest,digit);
                smallest= min(smallest,digit);
                temp/=10;
            }

            int range= largest-smallest;

            if(range>maxRange){
                maxRange = range;
                sum = num;
            }
            else if(range == maxRange){
                sum+=num;
            }
        }
        return sum;
    }
};