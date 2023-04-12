class Solution {
public:
    int solve(vector<int>& a, int k)
    {
        int i=0,j=0,s=0,cnt=0;
        while(j<a.size())
        {
            s=s+a[j];
            while(s>k)
            {
                s=s-a[i];
                i++;
            }
            cnt=cnt+(j-i+1);
            j++;
        }
    
        return cnt;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        vector<int>a;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
                a.push_back(0);
            else
                a.push_back(1);
        }
        return solve(a,k)-solve(a,k-1);
    }
};