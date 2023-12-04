#include <iostream>
using namespace std;
int main()
{
    int r, c, n, nc;
    cin >> r >> c >> n;
    nc = (r * 100 + c) * n;
    cout << nc / 100 << " " << nc % 100;
    return 0;
}
