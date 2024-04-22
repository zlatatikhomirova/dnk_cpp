#include <iostream>

using namespace std;

int main() {
    int n, k, s, l, r, m;
    cin >> n >> k;
    int m1[n];
    for (int i = 0; i < n; i++) {
        cin >> m1[i];
    }
    for (int i = 0; i < k; i++) {
        cin >> s;
        l = 0;
        r = n - 1;
        while (l < r) {
            m = (l + r) / 2;
            if (m1[m] < s) l = m + 1;
            else r = m;
        }
        if (m1[r] == s) printf("YES\n");
        else printf("NO\n");
    }

}
