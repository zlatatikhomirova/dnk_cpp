#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b, t;
    cin >> a >> b;
    t = b;
    b = a;
    a = t;
    cout << a << " " << b;
    return 0;
}
