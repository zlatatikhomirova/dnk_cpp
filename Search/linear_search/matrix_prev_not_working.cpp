#include <iostream>
#include<vector>
using namespace std;

/*
* int A[n][m]
sedl : A[i][j] = min(A[i]) and max(A[:, j])
int B[k] : k = i*m + j
1 2
3 4
5 6

1 2 3 4 5 6

search max
max = B[0]
for i in range(n):
	k = i*m + j
	if B[k] > max:
		max = B[k]

search min
min = B[0]
for j in range(m):
	k = i*m + j
	if B[k] < min:
		min = B[k]



*/


int main() {
	unsigned short n, m, cnt=0;
	cin >> n >> m;
	vector <vector <int>> v(n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int tmp;
			cin >> tmp;
			v[i].push_back(tmp);
		}
	}
	for (int i = 0; i < n; i++) {
		int minn = v[i][0];
		for (int z = 1; z < m; z++) {
			if (v[i][z] < minn)
				minn = v[i][z];
		}
		for (int j = 0; j < m; j++) {
			int maxx = v[0][j];
			for (int k = 1; k < n; k++) {
				if (v[k][j] > maxx)
					maxx = v[k][j];
			}
			if ((v[i][j] == maxx) && (v[i][j] == minn))
				cnt++;

		}
	}
	cout << cnt << endl;
}
