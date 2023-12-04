#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    cout << a / 3600 % 24 << ":" << a % 3600 / 60 / 10 << a % 3600 / 60 % 10 << ":" << a % 60 / 10 << a % 60 % 10;
}
