/*
 * Problem          : Valid Perfect Square
 * Platform         : LeetCode #367
 * Difficulty       : Easy
 * Topic            : Binary Search / Math
 *
 * Approach         : Used Binary Search to find if any mid exists
 *                    where mid*mid == num.
 *                    If mid*mid < num, search right half.
 *                    If mid*mid > num, search left half.
 *                    Used long long to avoid integer overflow.
 *
 * Time Complexity  : O(log n)
 * Space Complexity : O(1)
 */

class Solution {
public:
    bool isPerfectSquare(int num) {
        long long left = 1;
        long long right = num;

        while(left <= right){
            long long mid = left + (right - left) / 2;
            long long square = mid * mid;

            if(square == num)
                return true;
            else if(square < num)
                left = mid + 1;
            else
                right = mid - 1;
        }

        return false;
    }
};
