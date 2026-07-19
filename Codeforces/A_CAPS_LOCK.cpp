# A. cAPS lOCK

**Platform:** Codeforces  
**Contest:** Codeforces Beta Round 95 (Div. 2)  
**Problem:** A - cAPS lOCK  
**Language:** C++  

## Problem
Given a string, determine whether it satisfies the Caps Lock condition:
- Either all letters are uppercase, or
- All letters except the first are uppercase.

If the condition holds, toggle the case of every character. Otherwise, print the string unchanged.

## Approach
- Check if every character is uppercase.
- Check if all characters except the first are uppercase.
- If either condition is true, toggle the case of each character.
- Otherwise, print the original string.

## Time Complexity
- **O(n)**

## Space Complexity
- **O(1)**

## Code

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool allUpper = true;
    bool exceptFirstUpper = true;

    for (char ch : s) {
        if (islower(ch)) {
            allUpper = false;
            break;
        }
    }

    for (int i = 1; i < s.size(); i++) {
        if (islower(s[i])) {
            exceptFirstUpper = false;
            break;
        }
    }

    if (allUpper || exceptFirstUpper) {
        for (int i = 0; i < s.size(); i++) {
            if (islower(s[i]))
                s[i] = toupper(s[i]);
            else
                s[i] = tolower(s[i]);
        }
    }

    cout << s;

    return 0;
}
```
