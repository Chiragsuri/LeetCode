class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        if(n==0) return tasks.size();
        unordered_map<char,int>m;
        for(auto ch : tasks)
        {
            if(m.find(ch)==m.end())
                m[ch]=0;
            
            m[ch]++;//adding the count of every character to the map
        }
        priority_queue<int> q;
        for(auto x:m)
            q.push(x.second);
        int cycles=0;
        while(q.empty()==false)
        {
            vector<int>temp;
            for(int i=0;i<=n;i++)//running our process for the cooldown process
            {
                if(q.empty()==false)
                {
                    temp.push_back(q.top());//we are seeing the tasks that we are processing during this cooldown pweriod
                    q.pop();
                }
            }
            for(int i:temp)
            {
                if(--i>0)
                    q.push(i);
            }
            cycles+= (q.empty()==true)? temp.size():n+1;
        }
        
        return cycles;
    }
};