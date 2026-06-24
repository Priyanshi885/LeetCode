class Solution {
public:
    int maxProfit(vector<int>& a) {
        int Profit =0;
        int n= a.size();

        for(int i=1; i<n; i++){
            if(a[i]>a[i-1]){
                Profit += a[i]-a[i-1];
            }
        }
        return Profit;
    }
};