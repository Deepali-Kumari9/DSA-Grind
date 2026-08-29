## CodeChef — Within Reach

**Problem:** A robot is at position `X` and the charging station is at position `Y`. The robot can travel at most `K` units. Determine whether it can reach the charging station.

### Approach

* Calculate the distance between the robot and the charging station using `|X - Y|`.
* If the distance is less than or equal to `K`, print `YES`.
* Otherwise, print `NO`.

### Complexity

* **Time:** O(1)
* **Space:** O(1)

### Language

C++17
