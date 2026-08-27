```cpp
/*
    Problem: Sliding Window Maximum
    Platform: LeetCode
    Problem No: 239

    Approach:
    - Use a deque to store indices of elements.
    - Maintain the deque in decreasing order of their values.
    - The index at the front always represents the maximum
      element of the current window.
    - Remove indices that are outside the current window.
    - Before inserting a new element, remove all smaller
      elements from the back because they can never become
      the maximum while the current element is in the window.

    Time Complexity: O(n)
    Space Complexity: O(k)
*/

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        deque<int> dq;

        for (int i = 0; i < nums.size(); i++) {

            // Remove elements that are outside the window
            if (!dq.empty() && dq.front() == i - k)
                dq.pop_front();

            // Maintain decreasing order of values
            while (!dq.empty() && nums[dq.back()] < nums[i])
                dq.pop_back();

            // Add current index
            dq.push_back(i);

            // Start recording maximums once the first
            // complete window is formed
            if (i >= k - 1)
                ans.push_back(nums[dq.front()]);
        }

        return ans;
    }
};
```

**GitHub file name:** `SLIDING_WINDOW_MAXIMUM.cpp`

**Key DSA topic:** `Deque / Monotonic Queue / Sliding Window`

**Complexity:** `O(n)` time and `O(k)` space.
