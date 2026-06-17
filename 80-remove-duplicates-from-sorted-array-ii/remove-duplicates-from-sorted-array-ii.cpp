class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0, j=0;
        int n = nums.size();
        while(j<n){
            if(i==0 || i==1 || nums[i-2]!=nums[j]){
                nums[i] = nums[j];
                i++;
            }
        j++;
        }
        return i;
    }
};