class Solution {
public:
    
    string greatestLetter(string s) 
    {
        vector<int> low(26), upp(26); 
        string res = "";
    
        for(auto it : s) 
        {
            if(it-'A'>=0 && it-'A'<26)
                upp[it-'A']++;
            else
                low[it-'a']++;
        }
        
        for(int i=25; i>=0; i--)
        {
            if(low[i] && upp[i]) 
            {
                return res = 'A'+i; 
            }
                
        }
        return res;  
    }
};