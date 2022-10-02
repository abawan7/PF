#include <iostream>
using namespace std;

int main() {
	float u = 1.234, p = 3.334, i, numerator, denominator, formula;
	cout << "Enter The Value Of i: ";
	cin >> i;
	numerator = sqrt(u * sqrt(i * i * i) * (i * i - 1));
	denominator = sqrt(p * i - 2) + sqrt(p * i - 1);
	formula = numerator / denominator;
	cout << "The Answer is " << formula << endl;
	return 0;
}