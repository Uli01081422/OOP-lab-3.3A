#include "Complex.h"
int main()
{
	Complex pair1, pair2;
	cout << " Number of elements: " << Object::Count() << endl;

	cout << " pair (a,b) - "; cin >> pair1;
	cout << " ( a , b )";
	cout << pair1;

	cout << " pair (c,d) - "; cin >> pair2;
	cout << " ( c , d )";
	cout << pair2;

	Pair a = pair1 + pair2;
	cout << "(a, b) + (c, d) = (a + c), (b + d)";
	cout << a;

	Complex b = pair1 * pair2;
	cout << "(a, b) * (c, d) = (a * c), (b * d)";
	cout << b;

	Complex c = pair1 - pair2;
	cout << "(a, b) - (c, d) = (a - c), (b - d)";
	cout << c;

	Complex f = pair1 + pair2;
	cout << "(a, b) + (c, d) = (a + c), (b + d)";
	cout << f;
	cout << " Number of elements: " << Object::Count() << endl;
	//cout << endl << " Size of class Complex: " << sizeof(Complex) << endl;

	return 0;
}
