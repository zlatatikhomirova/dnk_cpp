#include <iostream>

using namespace std;

int main()
{
    int n, minn, preminn, t;
    cin >> n;
    int a[n];
    cin >> minn;
    cin >> t;
    if (t < minn)
    {
        preminn = minn;
        minn = t;
    }
    else preminn = t;
    for (int i = 0; i < n - 2; i++) {
        cin >> t;
        if (t < minn)
        {
            preminn = minn;
            minn = t;
        }
        else if (t < preminn) preminn = t;
    }
    cout << minn << " " << preminn;

}
