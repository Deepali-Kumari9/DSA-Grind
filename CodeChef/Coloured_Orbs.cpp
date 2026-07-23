# Coloured Orbs

## 📌 Problem
Chef starts with a skill of **0** and has:
- **R** red orbs (each worth **1** skill)
- **B** blue orbs (each worth **2** skill)

Chef can trade **1 red orb + 1 blue orb** for **1 green orb**, and each green orb gives **5** skill.

Find the maximum skill Chef can obtain by performing trades optimally.

## 💡 Approach
- Every pair of one red and one blue orb can be converted into one green orb.
- The number of possible trades is `min(R, B)`.
- After all possible trades:
  - Remaining red orbs contribute `1` skill each.
  - Remaining blue orbs contribute `2` skill each.
  - Each green orb contributes `5` skill.
- This simplifies to the formula:

  **Skill = R + 2 × B + 2 × min(R, B)**

## ⏱️ Complexity
- **Time:** O(1)
- **Space:** O(1)

## 💻 Solution (C++)

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int R, B;
    cin >> R >> B;

    cout << R + 2 * B + 2 * min(R, B);

    return 0;
}
```
