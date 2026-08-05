class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>st;
        for(char digit: num){
            while(!st.empty() && k>0 && st.top()>digit){
                st.pop();
                k--;
            }
            st.push(digit);
        }
        //if k is still left means digits are arranged in increasing order so remove from end
        while(k>0){
            st.pop();
            k--;
        }
        //convert stack to string
        string ans;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        //reverse the string
        reverse(ans.begin(),ans.end());
        //remove leading zeros
        int i=0;
        while(i<ans.size() && ans[i]=='0'){
            i++;
        }
        ans=ans.substr(i);
        //if answer is empty
        if(ans.empty()){
            return "0";
        } 
        return ans;    
    }
};