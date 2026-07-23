# Arrival of the General

## 📌 Problem
Given the heights of soldiers standing in a line, determine the minimum number of swaps required to move the tallest soldier to the front and the shortest soldier to the end.

## 💡 Approach
- Read all soldier heights into a vector.
- Find:
  - The **first occurrence** of the maximum height.
  - The **last occurrence** of the minimum height.
- Calculate:
  - Swaps to bring the tallest soldier to the front.
  - Swaps to move the shortest soldier to the end.
- If the tallest soldier originally appears after the shortest soldier, subtract one swap because moving the tallest forward shifts the shortest one position left.

## ⏱️ Complexity
- **Time:** O(n)
- **Space:** O(n)

## 💻 Solution (C++)

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maxHeight = a[0], minHeight = a[0];
    int maxIndex = 0, minIndex = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] > maxHeight) {
            maxHeight = a[i];
            maxIndex = i;
        }

        if (a[i] <= minHeight) {
            minHeight = a[i];
            minIndex = i;
        }
    }

    int ans = maxIndex + (n - 1 - minIndex);

    if (maxIndex > minIndex) {
        ans--;
    }

    cout << ans << endl;

    return 0;
}
```
