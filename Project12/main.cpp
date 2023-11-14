#include "define.h"

int main() {
	int a = 0, b = 0;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;

	cout << endl;

	int max = MAX(a, b);
	cout << "Max number is:" << max << endl;
	int min = MIN(a, b);
	cout << "Min number is:" << min; 

	cout << endl;

	int square = SQUARE(a);
	cout << "Square of a is:" << square << endl;
	int degree = DEGREE(a, b);
	cout << "a^b is:" << degree << endl;

	cout << endl;

	int evena = EVENA(a);
	if (evena == 1) {
		cout << "a is even" << endl;
	}
	else {
		cout << "a is odd" << endl;
	}
	int evenb = EVENB(b);
	if (evenb == 1) {
		cout << "b is even" << endl;
	}
	else {
		cout << "b is odd" << endl;
	}

	cout << endl;

	system("pause");
	return 0;
}