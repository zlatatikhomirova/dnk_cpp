#include <iostream>
#include<malloc.h>
using namespace std;

int main()
{
    
    unsigned short N;
    short x, minn, y;
    cin >> N;
    int *A;
    A = (int*)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++)
        cin >> A[i];
    cin >> x;
    minn = 2001;
    for (int i = 0; i < N; i++) {
        int tmp = abs(x - A[i]);
        if (abs(x - A[i]) < minn) {
            y = A[i];
            minn = tmp;
        }
    }
    cout << y;
    return 0;
}
