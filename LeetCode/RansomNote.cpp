/*
    Problem: 383. Ransom Note
    Platform: LeetCode
    Language: C++17

    Approach:
    - Store the frequency of each character in the magazine using a hash map.
    - Traverse the ransom note and decrease the frequency of each required character.
    - If any character's frequency becomes negative, it means the magazine
      doesn't contain enough occurrences of that character.
    - Otherwise, the ransom note can be constructed.

    Time Complexity: O(M + N)
    Space Complexity: O(K)
    where:
    - M = length of magazine
    - N = length of ransomNote
    - K = number of distinct characters
*/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mp;

        for (char ch : magazine) {
            mp[ch]++;
        }

        for (char ch : ransomNote) {
            mp[ch]--;

            if (mp[ch] < 0) {
                return false;
            }
        }

        return true;
    }
};
