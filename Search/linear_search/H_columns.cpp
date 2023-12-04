#include <iostream>

using namespace std;

int main()
{
    int x, n, t;
    cin >> x >> n;
    int col[n] = {0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> t;
            if (t == x) col[j]++;
        }
    }
    for (int i = 0; i < n; i++) {
        if (col[i]) cout << "YES"  << "\n";
        else cout << "NO" << "\n";
    }
}
