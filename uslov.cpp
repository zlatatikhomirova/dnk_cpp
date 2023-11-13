#include <iostream>
using namespace std;

int main() {
	int a = 1, b = 4;
	if (a > b) // условия пишутся в круглых скобках
		cout << "good\n"; // если в теле условия одна инструкция -
	                      // можно опустить фигурные скобки
		cout << "bad\n"; // это уже не входит в условие!

		if ((a % b) || (a * b > 10)) {
			a += 18;
			b -= a * 7 + 4;
		}
		else
			cout << false;
	return 0;
}
