#include <iostream>

using namespace std;

int main()
{
    float h, a, b;
    cin >> h >> a >> b;
    cout << ceil((h - a) / (a - b) + 1);
}
