class Solution {
public:
    string interpret(string command) {
        string ans = "";
        string temp = "";

        int size = command.length();

        for(int i = 0; i < size; i++){
            temp += command[i];
            if(temp == "G")
            {
                ans+=temp;
                temp = "";
            }
            else if(temp == "()")
            {
                ans+="o";
                temp = "";
            }
            
            else if(temp == "(al)"){
                ans+="al";
                temp = "";
            }
        }
        return ans;
    }
};