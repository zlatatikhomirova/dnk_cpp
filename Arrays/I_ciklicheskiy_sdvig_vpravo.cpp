#include <iostream>

using namespace std;

int main() {
    short n, x;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        x = i - 1;
        if (x < 0) x += n;
        cout << a[x] << " ";
    }

}
