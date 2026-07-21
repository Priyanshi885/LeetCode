class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int i=0, bestEnding = a[0], ans=a[0];
        int n=a.size();
        for(i=1; i<n; i++){
            int v1=bestEnding+a[i];
            int v2= a[i];
            bestEnding = max(v1,v2);
            ans= max(ans, bestEnding);
        }
        return ans;
    }
};