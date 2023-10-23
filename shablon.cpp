#include <iostream> /* cin >> куда, cout << что */
#include<cmath> // для sqrt(a*a + b*b);
using namespace std;

int main() { // integer 
	// float, double, int, char, bool - true, false
	// long , long long, short, unsigned 
	int i = 0;
	//cout << (5 > 4) << endl; // >, <, >=, <=, ==, != - операторы отношения; endl = end of line
					// || - или, && - и, ! - не
					// |, &, ~, >>, <<, ^ - побитовые
					// % - остаток от деления, / - деление, * - умножение, +, -
	                // условно для a;  a = 1, a -= g(x) то же самое, что и a = a + 1 , a = a - 1
					// ++a, a++, --a, a-- 
	cout << i++;
	return 0;
}
