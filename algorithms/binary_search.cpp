#include <iostream>

using namespace std;

bool valid(int x, int k, int* p, int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += x / p[i];
	}
	return sum >= k;
}
int main() {
	int p[] = { 2, 3, 7 };
	int k = 8, n = 3;
	int a = 0, b = 7 * 8;
	while (a <= b) {
		int x = (a + b) / 2;
		if (!valid(x, k, p, n))
			a = x + 1;
		else 
			b = x - 1;
	}
	
	cout << a << " " << b << endl;
}
