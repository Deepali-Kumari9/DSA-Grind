/*
 * Problem          : Chef Visits Hotel
 * Platform         : CodeChef (CHEFHOTEL)
 * Difficulty       : NA
 *
 * Approach         : Total bill = N * R + E
 *                    where N = number of nights,
 *                    R = room charge per night,
 *                    E = extra service charges.
 *                    Simple formula — one line solution.
 *
 * Time Complexity  : O(1)
 * Space Complexity : O(1)
 */

int calculateHotelBill(int N, int R, int E) {
    return N * R + E;
}
