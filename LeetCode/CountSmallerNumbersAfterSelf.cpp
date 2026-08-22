```cpp
/*
    Problem: 315. Count of Smaller Numbers After Self
    Platform: LeetCode
    Language: C++

    Approach:
    - Use Coordinate Compression to map each distinct number to a rank.
    - Use a Fenwick Tree (Binary Indexed Tree) to maintain frequencies
      of numbers already processed.
    - Traverse the array from right to left.
    - For each number, query the Fenwick Tree to count how many
      previously processed numbers have a smaller rank.
    - Then update the Fenwick Tree with the current number.

    Time Complexity: O(n log n)
    Space Complexity: O(n)
*/

class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        int n = nums.size();

        vector<int> sorted_nums(nums.begin(), nums.end());
        sort(sorted_nums.begin(), sorted_nums.end());

        sorted_nums.erase(
            unique(sorted_nums.begin(), sorted_nums.end()),
            sorted_nums.end()
        );

        int m = sorted_nums.size();
        vector<int> bit(m + 1, 0);

        auto update = [&](int i) {
            for (; i <= m; i += i & (-i))
                bit[i]++;
        };

        auto query = [&](int i) {
            int sum = 0;
            for (; i > 0; i -= i & (-i))
                sum += bit[i];
            return sum;
        };

        vector<int> result(n);

        for (int i = n - 1; i >= 0; i--) {
            int rank = lower_bound(
                sorted_nums.begin(),
                sorted_nums.end(),
                nums[i]
            ) - sorted_nums.begin() + 1;

            result[i] = query(rank - 1);

            update(rank);
        }

        return result;
    }
};
```

**GitHub file name:** `CountSmallerNumbersAfterSelf.cpp`
