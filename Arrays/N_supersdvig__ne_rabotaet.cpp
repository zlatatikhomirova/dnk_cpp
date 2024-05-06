#include <iostream>

using namespace std;

int main() {
	int t, n, arr[10000], k;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cin >> k;
	
	if (k < 0) {
		k = -k;
		for (int i = 0; i < k; i++) {
			t = arr[0];
			for (int j = 0; j < n - 1; j++) {
				arr[j] = arr[j + 1];
			}
			arr[n - 1] = t;
		}
	}
	else if (k > 0) {
		for (int i = 0; i < k; i++) {
			t = arr[n - 1];
			for (int j = n - 1; j > 0; j--) {
				arr[j] = arr[j - 1];
			}
			arr[0] = t;
		}
	}
	
	
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}
