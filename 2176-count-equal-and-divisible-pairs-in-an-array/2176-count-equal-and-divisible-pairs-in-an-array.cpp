class Solution {
public:
   int countPairs(vector<int>& nums, int k) {
	unordered_map<int, vector<int>> mp;
	int n = nums.size();

	// count variable used to track number of possible combinations satisfying given conditions in the question

	int count = 0;

	for(int i=0;i<n;i++){
		// We use find() method of maps to check any further occurence of our current element in given vector 
		if(mp.find(nums[i]) != mp.end()){
			// Now we can simply iterate over indices of each element stored in vector mapped according to first occurence of each element accordingly stored in our unordered map
			for(auto x : mp[nums[i]])
				// Here, we test each pair of i and x(all next occurences) for conditions given in the Question
				if((i * x) % k == 0)
					count++;
		}

		// We push all other occurences after 1st occurence of any element into a seperate vector stored for each element in unordered map mp
		mp[nums[i]].push_back(i);
	}

	return count;
}
};