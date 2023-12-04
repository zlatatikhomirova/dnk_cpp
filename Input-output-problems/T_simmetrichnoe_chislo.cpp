#include <iostream>

using namespace std;

int main() {
	int n, n1, n2, n3, n4, ns1, ns2;
	cin >> n;
	n1 = n / 1000;
	n2 = n / 100 % 10;
	n3 = n / 10 % 10;
	n4 = n % 10;
	ns1 = n1 - n4;
	ns2 = n2 - n3;
	cout << 1 + ns1 * 9 + ns2;
}
