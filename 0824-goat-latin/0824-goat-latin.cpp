class Solution {
public:
    string toGoatLatin(string sentence) {
        unordered_set<char> vowels{'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        stringstream ss(sentence);
        string word, ans;
        int i = 1;
        
        while (ss >> word) {
            char firstChar = word[0];
            
            if (vowels.count(firstChar) > 0) {
                ans += word;
            } else {
                ans += word.substr(1) + firstChar;
            }
            
            ans += "ma" + string(i, 'a') + " ";
            i++;
        }
        
        ans.pop_back();
        return ans;
    }
};
