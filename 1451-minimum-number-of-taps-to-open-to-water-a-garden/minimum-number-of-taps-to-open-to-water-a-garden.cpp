class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
        vector<int>maxReach(n+1,0);
        for(int i=0; i<=n; i++){
            int left=max(0,i - ranges[i]);
            int right=min(i + ranges[i],n);

            maxReach[left]=max(maxReach[left],right);
        }
        int taps=0;
        int currentEnd=0;
        int farthest=0;
        for(int i=0; i<=n; i++){
            farthest=max(farthest,maxReach[i]);

            if(i==currentEnd){
                if(farthest<=i)
                return -1;

                taps++;
                currentEnd=farthest;

                if(currentEnd ==n)
                return taps;
            }
        }
        return -1;
    }
};