class Solution {
public:
    int reverseDegree(string s) {
        int n=s.size();
        int answer=0;
        for(int i=0; i<n; i++){
            int normal_index=s[i]-'a'+1;
            int reverse_index = 27-normal_index;
            int string_index = i+1;
            int product = reverse_index* string_index;
            answer+=product;
        }
        return answer;
    }
};