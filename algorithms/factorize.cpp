#include <iostream>
#include <vector>

using namespace std;

vector<int> sieve_least(int n) {
	vector<int> prime(n + 1);
	prime[0] = prime[1] = 0;
	for (int i = 2; i <= n; ++i) prime[i] = i;

	for (int i = 2; i <= n; ++i) {
		if (prime[i] == i)
			if (i * 1ll * i <= n) {
				for (int j = i * i; j <= n; j += i) {
					//cout << j << " ";
					if (prime[j] < i)
						continue;
					prime[j] = i;
				}
				cout << endl;
			}

	}

	return prime;
}

vector<vector<int>> vec_factorize(int n) {
	vector<vector<int>> prime(n + 1);

	for (int i = 2; i <= n; ++i) prime[i].push_back(i);

	for (int i = 2; i <= n; ++i) {
		if (prime[i].size() < 2) {
			for (long long j = 2 * i; j <= n; j += i) {

				cout << "i " << i << '\n';
				cout << "j " << j << '\n';
				for (int x : prime[j])
					cout << x << " ";
				cout << '\n';
				int tmp = j;
				while (tmp % i == 0) {
					tmp /= i;
					prime[j].push_back(i);
				}
				
			}
			cout << endl;
		}
		else 
			prime[i].erase(prime[i].begin());
	}
	return prime;
}




int main() {
	vector<vector<int>> v = vec_factorize(20);
	cout << "OK";
	for (int i = 0; i <= 20; i++) {
		cout << i << "   ";
		for (int el : v[i]) cout << el << " ";
		cout << "\n";
	}
}
