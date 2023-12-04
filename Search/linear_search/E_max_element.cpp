#include <iostream>
#include <malloc.h>

using namespace std;

int main()
{
    short n, t, maxi;
    maxi = -1001;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t > maxi) maxi = t;
    }
    cout << maxi;
}
