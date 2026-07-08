# 🚚 Minimum Vehicles for Cake Delivery | CodeChef

## 📌 Problem
Determine the minimum number of vehicles required to deliver `N` cakes, where each vehicle can carry a limited number of cakes based on its capacity.

---

## 💡 Approach
- Calculate how many cakes a single vehicle can transport:
  - `cakesPerVehicle = Y / X`
- Use ceiling division to determine the minimum number of vehicles needed:
  - `(N + cakesPerVehicle - 1) / cakesPerVehicle`

This ensures that even if some cakes remain after filling the available vehicles, one additional vehicle is counted.

---

## ⚙️ Complexity Analysis
- **Time Complexity:** `O(1)`
- **Space Complexity:** `O(1)`

---

## 💻 C++ Solution

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    
    int cakesPerVehicle = y / x;
    int vehicles = (n + cakesPerVehicle - 1) / cakesPerVehicle;
    
    cout << vehicles << endl;
    
    return 0;
}
```

---

### 🏷️ Tags
`Math` `Implementation` `Greedy` `CodeChef` `C++`
