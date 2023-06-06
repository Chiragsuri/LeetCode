class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxi=0;
        maxi=max(gain[0],maxi);
        for(int i =1;i<size(gain);i++){
            gain[i]+=gain[i-1];
            maxi=max(maxi,gain[i]);
        }
        return maxi;
    }
};