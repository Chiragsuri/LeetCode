class Solution{
public:int balancedStringSplit(string s){
    int ans = 0;
    int numR = 0;
    int numL = 0;
    for (int i = 0; i < s.length(); i++)
    {
            if (s[i] == 'R')
                numR++;
            else
                numL++;
            if (numR == numL)
            {
                ans++;
                numR = 0;
                numL = 0;
            }
        }
        return ans;
    }
};