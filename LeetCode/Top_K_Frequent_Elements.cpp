# Top_K_Frequent_Elements.cpp

## 📌 Problem
**347. Top K Frequent Elements**  
**Platform:** LeetCode  
**Difficulty:** Medium

## 📝 Problem Statement
Given an integer array `nums` and an integer `k`, return the `k` most frequent elements. You may return the answer in any order.

## 💡 Approach
- Use an unordered map to count the frequency of each element.
- Store each element and its frequency in a max heap (priority queue), where the frequency is the priority.
- Extract the top `k` elements from the heap and add them to the answer vector.
- Return the resulting vector.

## ⏱️ Complexity Analysis
- **Time Complexity:** `O(n + m log m)`
  - `n` = size of the input array
  - `m` = number of distinct elements
- **Space Complexity:** `O(m)`

## 💻 Solution

```cpp
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        for (int x : nums) {
            mp[x]++;
        }

        priority_queue<pair<int, int>> pq;

        for (auto it : mp) {
            pq.push({it.second, it.first});
        }

        vector<int> ans;

        while (k--) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};
```

## ✅ Key Idea
Count the frequency of each element using a hash map, then use a max heap to efficiently retrieve the `k` elements with the highest frequencies.
