/*
 * Problem          : Reduce to Single Element Array
 * Platform         : CodeChef (DSAMONDAY007 - DSCPPAS266)
 *
 * Approach         : Sorted the array. After sorting, for the
 *                    array to be reducible, consecutive elements
 *                    must be equal or differ by exactly 1.
 *                    If any consecutive pair differs by more than 1
 *                    or are not equal, return false.
 *
 * Time Complexity  : O(n log n)
 * Space Complexity : O(1)
 */

bool canReduce(int N, vector<int>& arr) {
    sort(arr.begin(), arr.end());

    for (int i = 1; i < N; i++) {
        if (arr[i] != arr[i - 1] && arr[i] - arr[i - 1] > 1) {
            return false;
        }
    }

    return true;
}
