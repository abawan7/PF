#include <iostream>
using namespace std;

int main() {
	int y, f, i;
	cout << "Enter Inches To Convert: ";
	cin >> i;
	y = i / 36;
	i = i % 36;
	f = i / 12;
	i = i % 12;
	cout << "After Conversion: " << y << " Yards " << f << " Feets " << i << " Inches." << endl;
	return 0;
}