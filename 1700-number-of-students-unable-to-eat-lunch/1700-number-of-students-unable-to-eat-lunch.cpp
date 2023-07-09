class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack<int>st;
        queue<int>q;
        for(int i= sandwiches.size()-1;i>=0;i--){
            st.push(sandwiches[i]);
        }
        for(int i=students.size()-1;i>=0;i--){
            q.push(students[i]);
        }
        int size = students.size();
        int count=0;
        while(!st.empty()){
            if(st.top()==q.front()){
                st.pop();
                q.pop();
                size--;
                count=0;
            }
            else if(st.top()!=q.front()){
                int temp = q.front();
                q.pop();
                q.push(temp);
                count++;
            }
            if(size==count)
                return count;
        }
        return 0;
    }
};