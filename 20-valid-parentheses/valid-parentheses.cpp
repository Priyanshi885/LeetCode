class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        
        for(char ch:s){
            //opening bracket
            if(ch=='(' ||ch=='{' ||ch=='['){
                st.push(ch);
            }
            //closing bracket
            else{
                //empty stack
                if(st.empty()) 
                return false;
                
                //different elements
                else if((ch==')' && st.top()!='(') || (ch=='}' && st.top()!='{') || (ch==']' && st.top()!='[') )
                return false;

                //same elements
                else
                st.pop();
            } 
        }
        return st.empty();
    }
};