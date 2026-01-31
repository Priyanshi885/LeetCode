class Solution {
public:
    int shipWithinDays(vector<int>& arr, int k) {
    int n = arr.size();
        
        if(k>n)
        return -1;
        
        int start=0, end=0, ans, mid;
        for(int i=0; i<n; i++)
        {
            start= max(start,arr[i]);
            end += arr[i];
        }
        
        while(start<=end)
        {
            mid=start+(end-start)/2;
            
            int pages=0, count=1;
            for(int i=0 ; i<n; i++)
            {
                pages+=arr[i];
                if(pages > mid)
                {
                    // doosre student ko assign krenge wo pages
                    count++;
                    pages = arr[i];
                }
            }
            if(count <= k)
            {
                ans=mid;
                end = mid-1;
            }
            else
            start = mid+1;
        }
        return ans;    
    }
};