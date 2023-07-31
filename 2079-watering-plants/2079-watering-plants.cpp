class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int refil=capacity;
        int steps=0;
        for(int i=0;i<plants.size();i++){
            if(plants[i]>capacity){
                steps+=2*i;
                capacity=refil;
            }
            steps++;
            capacity-=plants[i];
        }
        return steps;
    }
};