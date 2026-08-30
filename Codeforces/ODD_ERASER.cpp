## Codeforces Round 1118 (Div. 2) — A. Odd Eraser

**Problem:** Given an array, find the GCD of the first and last elements.

### Approach

* Read the array of `n` elements.
* The answer only depends on the first element `a[0]` and the last element `a[n-1]`.
* Use the built-in `gcd()` function to calculate their greatest common divisor.

### Complexity

* **Time:** O(log(min(a[0], a[n-1])))
* **Space:** O(n)

### Language

C++17
