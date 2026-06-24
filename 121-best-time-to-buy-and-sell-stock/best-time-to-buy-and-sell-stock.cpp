class Solution {
public:
    int maxProfit(vector<int>& a) {
        int minSoFar=a[0];
        int maxProfit=0;
        int n=a.size();
        
        for(int i=0; i<n; i++){
        minSoFar = min(minSoFar, a[i]);
        int profit = a[i]-minSoFar;
        maxProfit = max(profit, maxProfit);
        }
    return maxProfit;
    }
};