class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string>st;
        st.push("main");
        int size=0;
        for(auto it: logs){
            if(it == "./" || it == "../" and st.top()=="main")
                continue;
            else if(it == "../" and st.top()!="main"){
                st.pop();
            }
            else{
                it.pop_back();
                st.push(it);
            }
            size=st.size();
        }
        return st.size()==1 ? 0 : size-1;
    }
};