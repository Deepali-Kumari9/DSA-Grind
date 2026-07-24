# Merge Intervals

## 📌 Problem
Given an array of intervals where `intervals[i] = [start, end]`, merge all overlapping intervals and return an array of the non-overlapping intervals that cover all the intervals in the input.

## 💡 Approach
- Sort the intervals based on their starting time.
- Initialize the first interval as the current interval.
- Traverse the remaining intervals:
  - If the current interval overlaps with the next one, merge them by updating the ending point.
  - Otherwise, add the current interval to the answer and move to the next interval.
- Finally, add the last merged interval to the result.

## ⏱️ Complexity
- **Time:** O(n log n) (due to sorting)
- **Space:** O(n) (for storing the merged intervals)

## 💻 Solution (C++)

```cpp
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        sort(intervals.begin(), intervals.end());

        vector<int> curr = intervals[0];

        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] <= curr[1]) {
                curr[1] = max(curr[1], intervals[i][1]);
            } else {
                ans.push_back(curr);
                curr = intervals[i];
            }
        }

        ans.push_back(curr);
        return ans;
    }
};
```
