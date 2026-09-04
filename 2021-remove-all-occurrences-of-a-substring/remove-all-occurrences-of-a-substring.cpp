class Solution {
public:
    string removeOccurrences(string s, string part) {
        stack<char>st;
        for(char ch:s){
            st.push(ch);

            if(st.size()>=part.size()){
                string temp="";
                for(int i=0; i<part.size(); i++){
                    temp+=st.top();
                    st.pop();
                }
                reverse(temp.begin(),temp.end());
                if(temp!=part){
                    for(char c:temp)
                    st.push(c);
                }
            }
        }
        string ans="";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};