#include <iostream>
#include<malloc.h>
using namespace std;

int main()
{
    
    unsigned short N, cnt=0;
    short x;
    cin >> N;
    int *A;
    A = (int*)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++)
        cin >> A[i];
    cin >> x;
    for (int i = 0; i < N;)
        if (A[i++] == x) {
            cout << "YES" << endl;
            return 0;
        }
    cout << "NO";
    return 0;
}
