# Group_Anagrams.cpp

## 📌 Problem
**49. Group Anagrams**  
LeetCode

## 💡 Approach
- Use a hash map where the key is the sorted version of each string.
- Iterate through the input array:
  - Create a copy of the current string.
  - Sort the copied string to form the key.
  - Store the original string in the vector corresponding to the sorted key.
- Finally, collect all the grouped anagrams from the hash map into the answer vector.

## ⏱️ Complexity
- **Time:** O(n × k log k)
  - `n` = number of strings
  - `k` = maximum length of a string
- **Space:** O(n × k)

```cpp
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for (string s : strs) {
            string temp = s;
            sort(temp.begin(), temp.end());
            mp[temp].push_back(s);
        }

        vector<vector<string>> ans;

        for (auto x : mp) {
            ans.push_back(x.second);
        }

        return ans;
    }
};
```
