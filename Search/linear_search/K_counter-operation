#include <iostream>

using namespace std;

int main()
{
    short n, maxx, minn;
    cin >> n;
    int a[n];
    maxx = -1;
    minn = 6;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > maxx) maxx = a[i];
        if (a[i] < minn) minn = a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] == maxx) cout << minn << " ";
        else cout << a[i] << " ";
    }
}
