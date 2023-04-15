class Twitter {
public:
    unordered_map<int,unordered_set<int>> friends;
    priority_queue<vector<int>> feed;
    int time;
    Twitter() {
        friends.clear();
        feed=priority_queue<vector<int>>();
        time=0;
    }
    
    void postTweet(int userId, int tweetId) {
        feed.push({time++,userId,tweetId});
    }
    
    vector<int> getNewsFeed(int userId) {
        vector<int> ret;
        priority_queue<vector<int>> feeds=feed;
        int n=0;
        while(!feeds.empty() && n<10)
        {
            auto it=feeds.top();
            if(it[1]==userId || friends[userId].find(it[1])!=friends[userId].end())
            {
                n++;
                ret.push_back(it[2]);
            }
            feeds.pop();
        }
        return ret;
    }
    
    void follow(int followerId, int followeeId) {
        friends[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        friends[followerId].erase(followeeId);
    }
};
/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */