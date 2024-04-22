#include <bits/stdc++.h>

using namespace std;

int main() {
    short n, f, cnt = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        f = 0;
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) f = 1;
        }
        if (f == 0) cnt++;
    }
    cout << cnt;
}
