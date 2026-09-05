class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n=capacity.size();
        vector<int>required(n,0);
        for(int i=0; i<n; i++){
            int currently_rocks=rocks[i];
            int capacity_rocks=capacity[i];
            int required_rocks=capacity_rocks - currently_rocks;
            required[i]=required_rocks;
        }
        sort(required.begin(),required.end());
        int count=0;
        for(int i=0; i<n; i++){
            if(additionalRocks>=required[i]){
                additionalRocks-=required[i];
                count++;
            }
            else{
                break;
            }
        }
        return count;
    }
};