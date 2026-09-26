class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n=colors.size();
        int ans=0; //total removal cost
        int prev=neededTime[0]; //current group me ab tak max time

        for(int i=1; i<n; i++){
            if(colors[i]==colors[i-1]){
                ans+=min(prev,neededTime[i]);
                prev=max(prev,neededTime[i]);
            }
            else{
                prev=neededTime[i];
            }
        }
        return ans;
    }
};