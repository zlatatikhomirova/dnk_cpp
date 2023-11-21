#include <iostream>
#include<vector>
using namespace std;

int main() {
	unsigned short N;
	vector <int> v;
	cin >> N;
	int x;
	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	cin >> x;
	for (int i = 0; i < N; i++) {
		if (v[i] == x)
			cout << i+1 << " ";
	}
}
