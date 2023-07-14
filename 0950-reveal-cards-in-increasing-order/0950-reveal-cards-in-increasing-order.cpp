class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        deque<int>dq;
        if(size(deck)<=2)
            return deck;
        sort(deck.begin(), deck.end(), greater<int>());
        dq.push_front(deck[0]);

        for(int i=1;i<size(deck);i++){
            int temp = dq.back();
            dq.pop_back();
            dq.push_front(temp);
            dq.push_front(deck[i]);
            // for(auto it:dq){
            //     cout<<it<<" ";
            // }
            // cout<<endl;
            
        }
        return vector<int>(dq.begin(),dq.end());
    }
};