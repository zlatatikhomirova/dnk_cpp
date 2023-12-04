#include <iostream>
#include <malloc.h>

using namespace std;

int main()
{
    unsigned short n;
    int maxi, num;
    maxi = -1001;
    cin >> n;
    int* a;
    a = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > maxi) {
            maxi = a[i];
            num = i + 1;
        }
    }
    cout << num;
}
