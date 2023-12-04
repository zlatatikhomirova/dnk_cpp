#include <iostream>
using namespace std;

int
main ()
{
    int n;
    cin >> n;
    cout <<  n % (24*60) / 60 << " " << n % 60;
}
