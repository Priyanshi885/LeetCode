class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        string res;
        int n=s.size();

        for(int i=0; i<n; i++){
            if(st.empty()){ //if stack is empty then no element for comparison just push it
                st.push(s[i]);
                continue;
            }
            
            if(st.top()==s[i]){ //agar tos =  current element don't push that and remove tos
                st.pop();
                continue;
            }

            st.push(s[i]); //diff element simply push into stack
        }

        while(!st.empty()){
            char c=st.top();
            st.pop();
            res.push_back(c);
        }
        reverse(res.begin(),res.end()); //reverse the result string 
        return res;
    }
};