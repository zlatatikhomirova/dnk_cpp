#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    int hn, mn, hk, mk;
    for (int i = 0; i < n; i++) {
        scanf("%d:%d %d:%d", &hn, &mn, &hk, &mk);
        v[i].first = hn * 60 + mn;
        v[i].second = hk * 60 + mk;
    }
    int min, mini;
    for (int i = 0; i < n; i++) {
        mini = i;
        for (int j = i; j < n; j++) {
            if (v[j].second < min) {
                min = v[j].second;
                mini = j;
            }
        }
        swap(v[i], v[mini]);
    }
    int tmp = v[0].second, c = 1;
    for (int i = 1; i < n; i++) {
        if (v[i].first >= tmp) {
            tmp = v[i].second;
            c++;
        }
    }
    cout << c;
}
