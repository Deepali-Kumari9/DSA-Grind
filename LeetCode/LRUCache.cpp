/*
    Problem: LRU Cache
    Platform: LeetCode
    Language: C++17

    Approach:
    - Use a doubly linked list to maintain the order of cache usage.
    - Store the most recently used item at the back of the list and the least
      recently used item at the front.
    - Maintain a hash map that maps each key to its iterator in the list,
      enabling O(1) access.
    - For get():
        * If the key exists, move it to the back (most recently used)
          and return its value.
        * Otherwise, return -1.
    - For put():
        * If the key already exists, remove its old position.
        * If the cache is full, remove the front element (least recently used).
        * Insert the new key-value pair at the back and update the hash map.

    Time Complexity:
    - get(): O(1)
    - put(): O(1)

    Space Complexity: O(capacity)
*/

class LRUCache {
public:
    int cap;
    list<pair<int, int>> cache;
    unordered_map<int, list<pair<int, int>>::iterator> mp;

    LRUCache(int capacity) {
        cap = capacity;
    }

    int get(int key) {
        if (mp.find(key) == mp.end())
            return -1;

        auto it = mp[key];
        int value = it->second;

        cache.erase(it);
        cache.push_back({key, value});
        mp[key] = --cache.end();

        return value;
    }

    void put(int key, int value) {
        if (mp.find(key) != mp.end()) {
            cache.erase(mp[key]);
        }
        else if (cache.size() == cap) {
            int lruKey = cache.front().first;
            cache.pop_front();
            mp.erase(lruKey);
        }

        cache.push_back({key, value});
        mp[key] = --cache.end();
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
