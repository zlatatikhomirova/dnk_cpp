#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> sieve(n + 1, 1);
	for (int i = 2; i <= n; i++) {
		if (!sieve[i]) continue;
		for (int u = i+i; u <= n; u += i)

	}
}
