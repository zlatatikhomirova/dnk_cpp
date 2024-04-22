#include <iostream>

using namespace std;

int main() {
    short n;
    cin >> n;
    int a[n];
    int c;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    c = 0;
    for (int i = 1; i < n - 1; i++) {
        if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
            c++;
        }
    }
    cout << c;
}
