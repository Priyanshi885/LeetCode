class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }

        unordered_map<char,int> mp;
        //increase frequency using first string
        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
        }

        //decrease frequency using second string
        for(int i=0; i<t.size(); i++){
            mp[t[i]]--;
        }

        //check if all frequencies are equal
        for(auto x:mp){    //visit every key value pair in map one by one
            if(x.second!=0)  //x.first = key, x.second = value(frequency)
            return false;
        }
        return true;
    }
};