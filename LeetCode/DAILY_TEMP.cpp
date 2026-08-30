## LeetCode 739 — Daily Temperatures

**Problem:** Given an array of daily temperatures, find how many days you have to wait after each day to get a warmer temperature.

### Approach

* Use a **monotonic decreasing stack** to store the indices of temperatures that are waiting for a warmer day.
* For each temperature, compare it with the temperature at the top index of the stack.
* If the current temperature is warmer, pop the index and calculate the number of days waited.
* Push the current index into the stack.
* Any indices remaining in the stack have no warmer future day, so their answer remains `0`.

### Complexity

* **Time:** O(n)
* **Space:** O(n)

### Language

C++17
