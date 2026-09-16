📄 **REORGANIZE_STRING.cpp**

**LeetCode 767 – Reorganize String**
**Platform:** LeetCode
**Language:** C++17

**Problem:**
Rearrange the characters of a string so that no two adjacent characters are the same. Return any valid arrangement, or `""` if impossible.

💡 **Approach:**

* Count the frequency of each character.
* Use a max-heap to always choose the most frequent character.
* Keep the previously used character out of the heap temporarily so adjacent characters are different.
* If all characters cannot be placed, return `""`.

⏱️ **Complexity:**

* Time: `O(N log 26)` → effectively `O(N)`
* Space: `O(26)` → `O(1)`

💻 **C++ Solution:**

```cpp
class Solution {
public:
    string reorganizeString(string s) {
        int freq[26] = {};

        for (char c : s) {
            freq[c - 'a']++;
        }

        priority_queue<pair<int, char>> pq;

        for (int i = 0; i < 26; i++) {
            if (freq[i] > 0) {
                pq.push({freq[i], 'a' + i});
            }
        }

        string ans;
        pair<int, char> prev = {0, '#'};

        while (!pq.empty()) {
            auto curr = pq.top();
            pq.pop();

            ans += curr.second;
            curr.first--;

            if (prev.first > 0) {
                pq.push(prev);
            }

            prev = curr;
        }

        if (ans.size() != s.size()) {
            return "";
        }

        return ans;
    }
};
```
