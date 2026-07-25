class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        string res;
        int n=s.size();

        for(int i=0; i<n; i++){
            if(st.empty()){
                st.push(s[i]);
                continue;
            }
            
            if(st.top()==s[i]){
                st.pop();
                continue;
            }

            st.push(s[i]);
        }

        while(!st.empty()){
            char c=st.top();
            st.pop();
            res.push_back(c);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};