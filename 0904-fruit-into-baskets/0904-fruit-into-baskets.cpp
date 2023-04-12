class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> count; 
        int i=0,j=0;
        while(j<fruits.size()){
            count[fruits[j]]++; 
            if (count.size() > 2) { 
                if (--count[fruits[i]] == 0)count.erase(fruits[i]); 
                i++; 
            }
            j++;
        }
        return j - i;
    }
};