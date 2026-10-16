class Solution {
public:
    int findPeakElement(vector<int>& v) {
        int n = v.size();
        if(n == 1) return 0;
        if(v[0] > v[1]) return 0;
        if(v[n-1] > v[n-2]) return n-1;

        int e = n-2, s = 1;
        while(s <= e){
            int mid = s + (e - s)/2;
            if(v[mid] > v[mid-1] and v[mid] > v[mid+1]) return mid;
            else if(v[mid] < v[mid-1]) e = mid-1;
            else if(v[mid] < v[mid+1]) s = mid+1;
        }
        return -1;
    }
};