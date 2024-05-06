#include <iostream>

using namespace std;

int main() {
	int n, a, b, c, d, t;
	cin >> n >> a >> b >> c >> d;
	int arr[10000];
	for (int i = 1; i <= n; i++) {
		arr[i] = i;
	}

	for (int i = a; i <= a + (b - a) / 2; i++) {
		t = arr[i];
		arr[i] = arr[b - (i - a)];
		arr[b - (i - a)] = t;
	}

	for (int i = c; i <= c + (d - c) / 2; i++) {
		t = arr[i];
		arr[i] = arr[d - (i - c)];
		arr[d - (i - c)] = t;
	}

	for (int i = 1; i <= n; i++) {
		cout << arr[i] << " ";
	}
}
