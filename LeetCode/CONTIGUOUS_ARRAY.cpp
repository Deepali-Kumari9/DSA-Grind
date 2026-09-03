# LeetCode 525 — Contiguous Array

### 💡 Approach

Use a **prefix sum + unordered_map** approach.

* Treat `0` as `-1` and `1` as `+1`.
* If the same prefix sum occurs again, the elements between those two indices contain an equal number of `0`s and `1`s.
* Store the **first occurrence** of each prefix sum to maximize the subarray length.

### ⏱️ Complexity

* **Time:** O(n)
* **Space:** O(n)

### 💻 C++ Solution

```cpp
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> mp;
        mp[0] = -1;

        int sum = 0;
        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0)
                sum--;
            else
                sum++;

            if (mp.find(sum) != mp.end()) {
                ans = max(ans, i - mp[sum]);
            } else {
                mp[sum] = i;
            }
        }

        return ans;
    }
};
```

### 🔗 Problem

LeetCode 525 — Contiguous Array

#DSA #LeetCode #CPlusPlus #Arrays #HashMap #PrefixSum #Coding
