/*
 * Problem          : Password Protection
 * Platform         : CodeChef (PASSPRO)
 * Difficulty       : NA
 *
 * Approach         : Computed sum of all elements in array.
 *                    Score = sum - n (subtract length from sum).
 *                    If score == 0, password is SECURE.
 *                    Otherwise NOT SECURE.
 *
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 */

string checkPassword(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
    int score = sum - n;
    if (score == 0){
        return "SECURE";
    }
    else {
        return "NOT SECURE";
    }
}
