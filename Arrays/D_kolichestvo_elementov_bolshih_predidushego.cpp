#include <iostream>
#include <climits>

using namespace std;

int main() {
    int n, t, p, cnt;
    cin >> n;
    p = INT_MAX;
    cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t > p)
        {
            cnt++;
        }
        p = t;
    }
    cout << cnt;
}
