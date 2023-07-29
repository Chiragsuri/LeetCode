class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>ans;
        for(int i=0;i<boxes.size();i++){
            int temp=0;
            for(int j=0;j<boxes.size();j++){
                if(boxes[j]=='1')
                    temp+=abs(i-j);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};