#include <bits/stdc++.h>

using namespace std;

int main() {
    short n, r, ans;
    cin >> n;
    short a[n + 1];
    for (int i = 1; i < n + 1; i++) cin >> a[i];
    a[n + 1] = -1;
    a[0] = 201;
    cin >> r;
    for (int i = 0; i < n + 1; i++) {
        if (a[i] >= r && a[i + 1] < r) {
            ans = i + 1;
            break;
        }
    }
    cout << ans;
}
