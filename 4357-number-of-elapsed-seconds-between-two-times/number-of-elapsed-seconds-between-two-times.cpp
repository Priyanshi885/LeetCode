class Solution {
public:
    int toseconds(string t){
        int hh = stoi(t.substr(0,2));
        int mm = stoi(t.substr(3,2));
        int ss = stoi(t.substr(6,2));

        return hh*3600+ mm*60 +ss;
    }
    int secondsBetweenTimes(string startTime, string endTime) {
        int start = toseconds(startTime);
        int end = toseconds(endTime);

        return end-start;
    }
};