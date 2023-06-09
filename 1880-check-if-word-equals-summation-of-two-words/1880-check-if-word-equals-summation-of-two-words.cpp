class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        return convertWordsToNum(firstWord) + convertWordsToNum(secondWord) == convertWordsToNum(targetWord);
        
    }
   long convertWordsToNum(string str) {
        long ans = 0;
        for(auto i: str) {
            ans = ans*10 + (i - 'a');
        }
        return ans;
    }
};