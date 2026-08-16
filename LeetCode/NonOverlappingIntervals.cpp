/*
    Problem: Non-overlapping Intervals
    Platform: LeetCode
    Language: C++17

    Approach:
    - Sort all intervals based on their ending time.
    - Keep track of the ending time of the last selected interval.
    - For each interval:
        - If its start time is less than prevEnd, it overlaps with
          the previously selected interval, so remove it.
        - Otherwise, keep it and update prevEnd to its ending time.
    - The greedy choice of keeping the interval that ends earliest
      leaves the maximum possible space for future intervals.

    Time Complexity: O(n log n)
    Space Complexity: O(1) auxiliary space (excluding sorting)
*/

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(),
             [](vector<int>& a, vector<int>& b) {
                 return a[1] < b[1];
             });

        int count = 0;
        int prevEnd = intervals[0][1];

        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] < prevEnd) {
                count++;
            } else {
                prevEnd = intervals[i][1];
            }
        }

        return count;
    }
};
