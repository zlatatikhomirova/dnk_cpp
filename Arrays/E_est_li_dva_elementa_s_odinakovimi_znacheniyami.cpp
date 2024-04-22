#include <iostream>

using namespace std;

int main() {
    short n, c;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    c = 0;
    for (int i = 0; i < n; i++) {
        if (i > 0 && (a[i] < 0 && a[i - 1] < 0 || a[i] >= 0 && a[i - 1] >= 0)) {
            c++;
        }
    }
    if (c > 0) {
        cout << "YES";
    }
    else cout << "NO";
}
