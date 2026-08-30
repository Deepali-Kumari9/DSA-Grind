## CodeChef — Minimum Flips

**Problem:** Given an array containing only `1` and `-1`, find the minimum number of flips required to make the sum of the array equal to `0`.

### Approach

* Calculate the sum of all elements.
* If `N` is odd, making the sum `0` is impossible, so print `-1`.
* Otherwise, each flip changes the sum by `2`, so the minimum number of flips is `|sum| / 2`.

### Complexity

* **Time:** O(N)
* **Space:** O(1)

### Language

C++17
