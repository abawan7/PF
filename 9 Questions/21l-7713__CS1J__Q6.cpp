#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "Enter Quantity (In Unit): ";
	cin >> a;
	a = a * 100;
	if (a > 1000) {
		b = a * 0.90;
		cout << "You get 10% Discount, Your Total Is: " << b << endl;
	}
	else {
		cout << "Your Total is " << a << endl;
	}
	return 0;
}