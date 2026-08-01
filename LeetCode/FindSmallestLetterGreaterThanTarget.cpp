/*
    Problem: 744. Find Smallest Letter Greater Than Target
    Platform: LeetCode
    Language: C++17

    Approach:
    - Use Binary Search to find the first character that is strictly greater than the target.
    - If letters[mid] <= target, search in the right half.
    - Otherwise, continue searching in the left half to find a smaller valid answer.
    - If no such character exists, return the first character in the array
      since the array is considered circular.

    Time Complexity: O(log N)
    Space Complexity: O(1)

    where:
    - N = number of characters in the array
*/

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int low = 0;
        int high = letters.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (letters[mid] <= target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        if (low == letters.size())
            return letters[0];

        return letters[low];
    }
};
