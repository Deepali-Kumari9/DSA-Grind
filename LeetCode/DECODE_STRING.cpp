📄 **DECODE_STRING.cpp**

**LeetCode 394 – Decode String**
**Platform:** LeetCode
**Language:** C++17

### 📝 Problem

Given an encoded string in the form `k[encoded_string]`, decode it by repeating the string inside the brackets `k` times.

### 💡 Approach

* Use two stacks:

  * One for repetition counts.
  * One for strings before each `[` bracket.
* Build the number when digits are encountered.
* On `[`, store the current string and repetition count.
* On `]`, repeat the current string `k` times and attach it to the previous string.
* Return the final decoded string.

### ⏱️ Complexity

* **Time:** O(N × K), depending on the number of repetitions
* **Space:** O(N × K) for the decoded result and stacks

### 💻 C++ Solution

```cpp
class Solution {
public:
    string decodeString(string s) {
        stack<int> nums;
        stack<string> st;

        string ans = "";
        int num = 0;

        for (char ch : s) {
            if (isdigit(ch)) {
                num = num * 10 + (ch - '0');
            }
            else if (ch == '[') {
                nums.push(num);
                st.push(ans);

                num = 0;
                ans = "";
            }
            else if (ch == ']') {
                int k = nums.top();
                nums.pop();

                string old = st.top();
                st.pop();

                string temp = "";

                for (int i = 0; i < k; i++) {
                    temp += ans;
                }

                ans = old + temp;
            }
            else {
                ans += ch;
            }
        }

        return ans;
    }
};
```
