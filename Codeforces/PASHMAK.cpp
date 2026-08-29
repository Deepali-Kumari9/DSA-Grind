

**Problem:** Given `n` flowers with different beauty values, find:

* The difference between the maximum and minimum beauty.
* The number of ways to choose a pair having this maximum difference.

### Approach

* Find the minimum and maximum beauty values.
* If all flowers have the same beauty, choose any 2 flowers: `n × (n-1) / 2`.
* Otherwise, count the occurrences of the minimum and maximum values.
* The number of valid pairs is:
  `countMin × countMax`.

### Complexity

* **Time:** O(n)
* **Space:** O(n)

### Language

C++17
