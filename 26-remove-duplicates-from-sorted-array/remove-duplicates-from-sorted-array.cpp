class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int i=0,j=1;
        int n=arr.size();
        while(j<n){
            if(arr[j]!=arr[i]){
                i++;
                arr[i] = arr[j];
            }
            j++;
        }
        return i+1;
    }
};