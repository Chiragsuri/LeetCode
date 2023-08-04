class Solution {
public:
    int solve(vector<string>& garbage, vector<int>& travel, char x, int time) {
        int n = garbage.size();
        int it = -1;
        for (int i = 0; i < n; i++) {
            string temp = garbage[i];
            if (temp.find(x) != string::npos) {
                time += count(temp.begin(), temp.end(), x);
                it = i;
            }
        }
        if (time == 0 || it == -1)
            return 0;
        else  if(it==0)
            return time;
        else return time+travel[it-1];
    }

    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int time = 0;

        for (int i = 1; i < travel.size(); i++)
            travel[i] += travel[i - 1];

        // Paper truck
        time += solve(garbage, travel, 'P', 0);
        cout << time << " ";

        // Glass truck
        time += solve(garbage, travel, 'G', 0);
        cout << time << " ";

        // Metal truck
        time += solve(garbage, travel, 'M', 0);

        return time;
    }
};