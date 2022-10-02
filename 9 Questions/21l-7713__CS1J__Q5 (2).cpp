#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "Enter Value of A: ";
	cin >> a;
	cout << "Enter Value of B: ";
	cin >> b;
	a = a * b;
	b = a / b;
	a = a / b;
	cout << "After Swap A is " << a << " B is " << b << endl;
	return 0;
}