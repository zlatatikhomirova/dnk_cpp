#include <iostream>
#include<vector>
using namespace std;

int main()
{
    
    unsigned short N, cnt=0;
    short x;
    cin >> N;
    vector<int>v(N);
    for (int i = 0; i < N; i++)
        cin >> v[i];
    cin >> x;
    for (int i = 0; i < N;)
        if (v[i++] == x)
            cnt++;
    cout << cnt;
    return 0;
}
