## Codeforces Round 1118 (Div. 2) — B1. Carrot Chopping (Easy Version)

**Problem:** Maximize the total value by choosing the optimal number of carrots to chop, using the given counts of carrot sizes.

### Approach

* Store the frequency of each carrot size.
* Build a **suffix sum** where `suf[x]` represents the number of carrots with size at least `x`.
* For each possible value `x`, calculate the total contribution.
* Take the maximum contribution among all choices.

### Complexity

* **Time:** O(N + M)
* **Space:** O(M)

### Language

C++17
