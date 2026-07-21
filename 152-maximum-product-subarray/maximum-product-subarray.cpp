class Solution {
public:
    int maxProduct(vector<int>& a) {
        int minEnding=a[0];
        int maxEnding=a[0];
        int result=a[0];
        int i=0;
        int n=a.size();

        for(i=1; i<n; i++){
            int v1=a[i];
            int v2=minEnding*a[i];
            int v3=maxEnding*a[i];

            maxEnding = max(v1,max(v2,v3));
            minEnding = min(v1,min(v2,v3));

            result=max(result, max(minEnding,maxEnding));
        }
        return result;
    }
};