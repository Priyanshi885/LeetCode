class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>st;
        int n=nums.size();
        vector<int>ans(n);

        //preload the stack with all elements except the last one
        for(int i=n-2; i>=0; i--){
            st.push(nums[i]);
        }

        for(int i=n-1; i>=0; i--){
            //remove all smaller elements
            while(!st.empty() && st.top()<=nums[i]){
                st.pop();
            }
            //store answer
            if(st.empty()){
                ans[i]=-1;
            }  
            else{
                ans[i]=st.top();
            }
            //push current element for future comparisons
            st.push(nums[i]);
        }
        return ans;
    }
};