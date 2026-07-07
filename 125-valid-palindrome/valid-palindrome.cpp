class Solution {
public:
    bool isPalindrome(string s) {
        int left=0;
        int right = s.size()-1;

        while(left<right){ //keep checking the string until all pairs are compared
            while(left<right && !isalnum(s[left])){ //keep moving left until you found a valid letter or digit
                left++;
            }
            while(left<right && !isalnum(s[right])){ // keep moving right until you found a valid letter or digit
                right--;
            }
            
            if(tolower(s[left]) != tolower(s[right])){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};