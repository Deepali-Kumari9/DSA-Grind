/*
    Problem: 621. Task Scheduler
    Platform: LeetCode
    Language: C++17

    Approach:
    - Count the frequency of each task using a frequency array of size 26.
    - Find the maximum frequency among all tasks.
    - Count how many tasks have this maximum frequency.
    - Calculate the minimum intervals required using the formula:
          (maxFreq - 1) * (n + 1) + maxCount
    - The final answer is the maximum of:
          1. Total number of tasks.
          2. Calculated minimum intervals.
    - This accounts for cases where enough different tasks exist to fill idle slots.

    Time Complexity: O(N)
    Space Complexity: O(1)

    Where:
    - N = number of tasks
    - n = cooldown interval between identical tasks
*/

class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> freq(26, 0);

        for (char task : tasks)
            freq[task - 'A']++;

        int maxFreq = *max_element(freq.begin(), freq.end());

        int maxCount = 0;
        for (int f : freq) {
            if (f == maxFreq)
                maxCount++;
        }

        int intervals = (maxFreq - 1) * (n + 1) + maxCount;

        return max((int)tasks.size(), intervals);
    }
};
