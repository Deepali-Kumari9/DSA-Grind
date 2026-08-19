```cpp
/*
    Problem: Design Twitter
    Platform: LeetCode
    Language: C++17

    Approach:
    - Maintain a timestamp for every tweet so we can identify the most recent tweets.
    - Store each user's tweets along with their timestamps.
    - Store the users that each user follows using an unordered_set.
    - For getNewsFeed(), consider tweets from the user and all followed users.
    - Use a max heap to keep tweets ordered by most recent timestamp.
    - After taking the most recent tweet from a user, push that user's previous
      tweet into the heap.
    - Stop after collecting at most 10 tweets.

    Time Complexity:
    - postTweet: O(1) average
    - follow/unfollow: O(1) average
    - getNewsFeed: O(F * T log(F * T)) in the worst case,
      where F is the number of followed users and T is the number of tweets considered.

    Space Complexity: O(F + T)
*/

class Twitter {
public:
    Twitter() {
        timestamp = 0;
    }

    void postTweet(int userId, int tweetId) {
        follows[userId].insert(userId);
        tweets[userId].push_back({timestamp++, tweetId});
    }

    vector<int> getNewsFeed(int userId) {
        priority_queue<array<int, 4>> maxHeap;

        follows[userId].insert(userId);

        for (int followeeId : follows[userId]) {
            auto &tw = tweets[followeeId];

            if (!tw.empty()) {
                int idx = tw.size() - 1;

                maxHeap.push({
                    tw[idx].first,
                    tw[idx].second,
                    followeeId,
                    idx
                });
            }
        }

        vector<int> result;

        while (!maxHeap.empty() && result.size() < 10) {
            auto top = maxHeap.top();
            maxHeap.pop();

            int tweetId = top[1];
            int uId = top[2];
            int idx = top[3];

            result.push_back(tweetId);

            if (idx - 1 >= 0) {
                auto &tw = tweets[uId];

                maxHeap.push({
                    tw[idx - 1].first,
                    tw[idx - 1].second,
                    uId,
                    idx - 1
                });
            }
        }

        return result;
    }

    void follow(int followerId, int followeeId) {
        follows[followerId].insert(followeeId);
    }

    void unfollow(int followerId, int followeeId) {
        if (followerId != followeeId) {
            follows[followerId].erase(followeeId);
        }
    }

private:
    int timestamp;

    unordered_map<int, unordered_set<int>> follows;
    unordered_map<int, vector<pair<int, int>>> tweets;
};
```

**GitHub file name:** `DesignTwitter.cpp`
