// C++ program to print the double value with maximum
// precision using cout
#include <iomanip>
#include <iostream>
#include <limits>
using namespace std;

int main()
{
	// double with 15 digits
	double myDouble = 123.456789012345;
	float myFloat = 321.98764f;

	cout << "Printing Double as is: " << endl;
	cout << myDouble << endl;
	cout <<  "Printing Float as is: " << endl;
	cout << myFloat << endl;

	// setting precision to max precision for double
	cout << endl << "Representing Double with maximum number of digits:" << endl;
	cout << fixed
		<< setprecision(
			numeric_limits<double>::digits)
		<< myDouble << endl;
	cout << endl << "Representing double with number of decimal digits that a double can represent without loss of precision:" << endl;
	cout << fixed
		<< setprecision(
					numeric_limits<double>::max_digits10)
		<< myDouble << endl;


	cout << endl << "Representing float with maximum number of digits:" << endl;
	cout << fixed
		<< setprecision(
			numeric_limits<float>::digits)
		<< myFloat << endl;
	cout << endl << "Representing float with number of decimal digits that a float can represent without loss of precision:" << endl;
	cout << fixed
		<< setprecision(
			numeric_limits<float>::max_digits10)
		<< myFloat << endl;


	return 0;
}