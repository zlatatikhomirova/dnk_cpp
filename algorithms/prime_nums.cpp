#include <iostream>
#include <vector>

using namespace std;

bool prime(int);
vector<int> factors(int);
vector<bool> sieve_bool(int);

int main() {

	int n;
	cin >> n;
		
	


	/*
	* vector<int> v = factors(n);
	for (auto x : v)
		cout << x << " ";
	*/

	return 0;
}

bool prime(int n) {
	if (n == 2)
		return true;
	if ((n < 2) || (n % 2 == 0))
		return false;
	for (int x = 3; x * x <= n; x += 2)
		if (n % x == 0)
			return false;
	return true;
}

vector<int> factors(int n) {
	vector<int> f;
	for (int x = 2; x * x <= n; x++) {
		while (n % x == 0) {
			f.push_back(x);
			n /= x;
		}
	}
	if (n > 1)
		f.push_back(n);
	return f;
}

vector<bool> sieve_bool(int n) {
	vector<bool> prime(n + 1, true);
	prime[0] = prime[1] = false;
	for (int i = 2; i <= n; ++i)
		if (prime[i])
			if (i * 1ll * i <= n)
				for (int j = i * i; j <= n; j += i)
					prime[j] = false;
	return prime;
}
