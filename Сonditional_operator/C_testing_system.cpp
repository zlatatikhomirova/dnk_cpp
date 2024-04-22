#include <iostream>
using namespace std;

int main()
{
    int num, ans, a, b, c, d;
    cin >> num >> ans;
    a = num / 1000;
    b = num % 1000 / 100;
    c = num % 100 / 10;
    d = num % 10;
    bool symm = (a == d) && (b == c);
    if ((symm && (ans == 1)) || (!symm && (ans != 1)))
        cout << "YES";
    else
        cout << "NO";

}
