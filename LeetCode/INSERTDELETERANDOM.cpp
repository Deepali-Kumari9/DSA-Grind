## LeetCode 380 — Insert Delete GetRandom O(1)

### 💡 Approach

Used a combination of **vector + unordered_map** to achieve average O(1) time for all operations.

* `vector` stores the elements for O(1) random access.
* `unordered_map` stores each element along with its index.
* During deletion, replace the element with the last element and remove the last element from the vector.
* `getRandom()` generates a random index from the vector.

### ⏱️ Complexity

* Insert: O(1) average
* Remove: O(1) average
* GetRandom: O(1)
* Space: O(n)

### 💻 C++ Solution

```cpp
class RandomizedSet {
public:
    vector<int> nums;
    unordered_map<int, int> mp;

    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if (mp.find(val) != mp.end())
            return false;

        nums.push_back(val);
        mp[val] = nums.size() - 1;
        return true;
    }
    
    bool remove(int val) {
        if (mp.find(val) == mp.end())
            return false;

        int index = mp[val];
        int last = nums.back();

        nums[index] = last;
        mp[last] = index;

        nums.pop_back();
        mp.erase(val);

        return true;
    }
    
    int getRandom() {
        return nums[rand() % nums.size()];
    }
};
```

**Topic:** Hash Map, Array, Design
**Difficulty:** Medium
**LeetCode:** 380
