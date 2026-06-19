/*
 * Problem          : Win the League
 * Platform         : CodeChef (WINLEAGUE)
 * Difficulty       : Beginner
 * Topic            : Conditional Statements
 *
 * Approach         : Compare the final points of Team A
 *                    and Team M.
 *                    - If A > M, Team A wins.
 *                    - If M > A, Team M wins.
 *                    - Otherwise, the result is a draw.
 *
 * Time Complexity  : O(1)
 * Space Complexity : O(1)
 */

string findLeagueWinner(int A, int M) {
    if (A > M)
        return "TEAM A";

    if (M > A)
        return "TEAM M";

    return "DRAW";
}
