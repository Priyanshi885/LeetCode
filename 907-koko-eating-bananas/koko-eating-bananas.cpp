class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
    int start=1, end=0, ans, mid, n=piles.size();
   
    for(int i=0; i<n; i++)
    {
        end=max(end,piles[i]);
    } 
    
    if(!start)
    start=1;

    while(start<=end)
    {
        mid= start+(end-start)/2;
        long long total_time = 0;
        for(int i=0; i<n; i++)
        {
            total_time += piles[i]/mid;
            if(piles[i]%mid)
            total_time++;
        }
        if(total_time > h)
        {
            start = mid+1;
        }
        else
        {
            ans=mid;
            end = mid-1;
        }
    } 
    return ans;   
    }
};