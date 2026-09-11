📄 **ALWAYS_CHANGING.cpp**

**Codeforces 2252B – Always Changing**

**Platform:** Codeforces
**Language:** C++17

**💡 Approach:**

* Count the number of `0`s and `1`s that can be removed while making the remaining string alternating.
* First, split the string into consecutive blocks of equal characters and calculate the number of deletions needed to make the blocks alternate.
* Let `z` and `o` represent the required deletions of `0` and `1`.
* The deleted characters must also alternate, so their counts can differ by at most `1`.
* If the required difference cannot be satisfied using the characters at the ends, the answer is `-1`.
* Otherwise, calculate the minimum number of deletions.

**⏱️ Complexity:**
Time: `O(N)`
Space: `O(N)`

**💻 C++ Solution:**

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        static char buf[200005];
        scanf("%s", buf);
        string s(buf, buf + n);

        long long z = 0, o = 0;
        char firstCh = s[0], lastCh = s[n - 1];
        int blocks = 0;

        int i = 0;

        while (i < n) {
            int j = i;

            while (j < n && s[j] == s[i])
                j++;

            long long len = j - i;

            if (s[i] == '0')
                z += len - 1;
            else
                o += len - 1;

            blocks++;
            i = j;
        }

        long long diff = z - o;
        long long need = max(0LL, llabs(diff) - 1);

        long long ans;

        if (need == 0) {
            ans = z + o;
        }
        else {
            char minorityChar = (diff > 0) ? '1' : '0';

            int avail;

            if (blocks == 1) {
                avail = (firstCh == minorityChar) ? 1 : 0;
            }
            else {
                avail = (firstCh == minorityChar ? 1 : 0)
                      + (lastCh == minorityChar ? 1 : 0);
            }

            if (need > avail)
                ans = -1;
            else
                ans = z + o + need;
        }

        printf("%lld\n", ans);
    }

    return 0;
}
```
