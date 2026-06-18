/*
 * Problem          : Flight Timings
 * Platform         : CodeChef (FLIGHTIME)
 * Difficulty       : NA
 *
 * Approach         : Chef wants to arrive exactly 2 hours before
 *                    flight and needs Y hours to travel.
 *                    Departure time = flightTime - travelTime - 2.
 *                    Simple formula — one line solution.
 *
 * Time Complexity  : O(1)
 * Space Complexity : O(1)
 */

int findDepartureTime(int flightTime, int travelTime) {
    return flightTime - travelTime - 2;
}
