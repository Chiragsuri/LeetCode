class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string>st;
        st.push("main");
        int size=0;
        for(auto it: logs){
            if(it == "./")
                continue;
            else if(it == "../"){
                if(st.top()!="main")
                st.pop();
            }
            else{
                it.pop_back();
                st.push(it);
            }
            size=st.size();
        }
        return size-1;
    }
};