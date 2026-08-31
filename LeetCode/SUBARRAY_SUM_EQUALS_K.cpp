## LeetCode 560 — Subarray Sum Equals K

**Problem:** Given an integer array `nums` and an integer `k`, find the total number of contiguous subarrays whose sum equals `k`.

### Approach

* Use **Prefix Sum + Unordered Map**.
* Maintain the current prefix sum.
* For every `sum`, check whether `sum - k` has appeared before.
* If it has, those previous prefix sums form subarrays with sum `k`.
* Store the frequency of each prefix sum in the map.

### Complexity

* **Time:** O(N)
* **Space:** O(N)

### Language

C++17
