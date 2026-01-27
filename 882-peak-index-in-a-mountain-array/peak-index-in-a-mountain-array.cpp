class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
    int start = 0;
int end = arr.size() - 1;


while (start < end) {
int mid = start + (end - start) / 2;


if (arr[mid] < arr[mid + 1]) {
// We are in the increasing part
start = mid + 1;
} else {
// We are in the decreasing part or at peak
end = mid;
}
}


// start == end → peak index
return start;    
    }
};