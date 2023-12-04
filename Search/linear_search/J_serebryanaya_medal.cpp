#include <iostream>

using namespace std;

int main()
{
    int n, maxx, premaxx, t;
    cin >> n;
    cin >> maxx;
    cin >> t;
    if (t > maxx)
    {
        premaxx = maxx;
        maxx = t;
    }
    else premaxx = t;
    for (int i = 0; i < n - 2; i++) {
        cin >> t;
        if (t > maxx)
        {
            premaxx = maxx;
            maxx = t;
        }
        else if (t > premaxx && t != maxx) premaxx = t;
    }
    cout << premaxx;
}
