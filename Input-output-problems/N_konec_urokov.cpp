#include <iostream>
using namespace std;
int main()
{
    int u, m;
    cin >> u;
    m = 45 * u + 15 * ((u - 1) / 2) + 5 * (u/ 2);
    cout << 9 + m / 60 << " " << m % 60;
    return 0;
}
