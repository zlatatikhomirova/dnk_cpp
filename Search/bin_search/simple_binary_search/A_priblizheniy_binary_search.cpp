#include <iostream>

using namespace std;

int main() {

    setlocale (LC_ALL, "Russian");

    int n, k, l, r, m, dif;
    cin >> n >> k;
    int a1[n], a2[k];
    for (int i = 0; i < n; i++) cin >> a1[i];
    for (int i = 0; i < k; i++) cin >> a2[i];

    for (int i = 0; i < k; i++) {
        l = 0;
        r = n - 1;
        while (l < r) {
            m = (l + r) / 2;
            if (a1[m] < a2[i]) l = m + 1;
            else r = m;
        }
        if (l > 0 && a1[l] != a2[i] && abs(a1[l - 1] - a2[i]) <= abs(a1[l] - a2[i])) cout << a1[l - 1] << "\n";
        else cout << a1[l] << "\n";
    }
}
