class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>st;
        string res;
        int n=s.size();

        for(int i=0; i<n; i++){
            //no element for comparison
            if(st.empty()){
                st.push({s[i],1});
                continue;
            }

            //different character
            if(st.top().first != s[i]){
                st.push({s[i],1});
                continue;
            }

            //same character
            st.top().second++;
            //if frequency becomes k remove it
            if(st.top().second==k){
                st.pop();
            }
        }

        while(!st.empty()){
            char ch=st.top().first;
            int freq=st.top().second;
            st.pop();

            while(freq--){
                res.push_back(ch);
            }
        }
        reverse(res.begin(),res.end()); //reverse the result string 
        return res;
    }
};