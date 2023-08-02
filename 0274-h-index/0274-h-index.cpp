class Solution {
public:
    int hIndex(vector<int>& c) {
       
        int s = 0, e = c.size() - 1;
        int mid; 
        
        sort(begin(c), end(c));
        
        while (s <= e) {
            if (c[mid = (e + s) / 2] < c.size() - mid) s = mid + 1;
            else e = mid - 1;
        }
        return c.size() - s;
    }
};