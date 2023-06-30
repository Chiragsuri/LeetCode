class Solution {
public:
    string ans;
    int i=1;
    void isGoat(string temp){
        char x = temp[0];
        if(x=='a' || x=='A' || x=='e' || x=='E' || x=='i' || x=='I' || x=='o' || x=='O' || x=='u' || x=='U' ){
            ans+=temp + "ma";
        }
        else{
            ans+=temp.erase(0,1) + x + "ma";
        }
        
        ans+=string(i, 'a') + " ";
        i++;
    }
    
    string toGoatLatin(string sentence) {

        string temp;
        for(auto c:sentence){
            if(!isspace(c))
            {
                temp+=c;
            }
            else{
                
                isGoat(temp);
                temp="";
            }
                
        }
        isGoat(temp);
        ans.pop_back();
        return ans;
    }
};