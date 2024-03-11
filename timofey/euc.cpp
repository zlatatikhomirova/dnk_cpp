#include <iostream>

// Рекурсия

int f(int a, int b) {
	if (b == a) return a;
	return f(a, a % b);
}

// Итеративная функция

int euc(int a, int b) {
	while (b) {
		int c = a;
		a = b;
		b = c % a;
	}
	return a;
}
