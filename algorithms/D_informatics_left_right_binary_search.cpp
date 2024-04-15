#include <iostream>
#include <vector>

using namespace std;

void input(int N, vector<int>& first);
unsigned left_border(int num, vector<int>& first);
unsigned right_border(int num, vector<int>& first);
void in_borders(int num, vector<int>& first);

int main() {
	unsigned N, M;
	cin >> N >> M;
	vector<int>first(N);
	vector<int>second(M);
	input(N, first);
	input(M, second);



}


void input(int N, vector<int>& first) {
	for (int i = 0; i < N; i++)
		cin >> first[i];
}
unsigned left_border(int num, vector<int>& first) {
};
unsigned right_border(int num, vector<int>& first) {

};

unsigned binsearch(int a, int b);
void in_borders(int num, vector<int>& first) {
	unsigned left = left_border(num, first);
	unsigned right = right_border(num, first);
	if (right - left > 1)
		cout << left + 2 << " " << right << "\n";
	else
		cout << 0 << "\n";
}
