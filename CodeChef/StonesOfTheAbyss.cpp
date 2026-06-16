/*
 * Problem          : Stones of the Abyss
 * Platform         : CodeChef (DSAMONDAY007 - STONEABYSS)
 *
 * Approach         : Alice removes odd number of stones first.
 *                    If N == 0, Bob loses immediately since
 *                    Alice cannot make a move — Bob wins.
 *                    Otherwise Alice always wins.
 *
 * Time Complexity  : O(1)
 * Space Complexity : O(1)
 */

string stoneAbbys(int N){
    if(N == 0) return "Bob";
    return "Alice";
}
