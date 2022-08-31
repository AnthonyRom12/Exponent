/***************
 Exponent in C++
 Working with Do {} While()
****************/
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
	// Index of last summand number:
	int n = 100;
	// Argument for exponent:
	double x = 1;
	// Variable for sum value, variable for adding value, index variable:
	double s = 0, q = 1, k = 0;
	// Statement loop:
	do {
		// Adding to sum:
		s += q;
		// New value of index variable:
		k++;
		// New value for adding var:
		q *= x / k;
	} while (k <= n);
	// Calcusation result:
	cout << "Sum Value: " << s << endl;
	// Exponent value by using cmath lib:
	cout << "Exponent value: " << exp(x) << endl;
	return 0;
}