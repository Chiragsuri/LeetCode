class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        
		// vector to be returned
        vector<int> rs(n1);
        
		// vector for storing next greater element of nums2
        vector<int> nge(n2);
        stack<int> st;

        st.push(nums2[n2-1]);
        nge[n2-1] = -1;

		// getting the next greater element
        for(int i=n2-2 ; i>=0 ; i--){

            while(st.size() > 0 && nums2[i] >= st.top()){
                 st.pop();
            }

            if(st.size() == 0){
                 nge[i] = -1;
            }else{
                 nge[i] = st.top();
            }

            st.push(nums2[i]);
        }   
        
		// putting nge in rs(vector to be returned)
        for(int i=0 ; i<n1 ; i++){
            auto itr = find(nums2.begin() , nums2.end() , nums1[i]);
            int idx = itr - nums2.begin();
            rs[i] = nge[idx];
        }
        return rs;
        
    }
};