#include <iostream>; ,
#include <limits>
using namespace std;
 
int main()
{
    float number1 = 2.5, number2 = 6.0, negativeNumber = -2.0, zero = 0;
    cout << "Jadyn Dangerfield - CMPS 5133 - Assignment 04 Question 2\n\n";
    cout << boolalpha
              << "int is iec559: " << numeric_limits<int>::is_iec559 << '\n'
              << "long is iec559: " << numeric_limits<long>::is_iec559 << '\n'
              << "float is iec559: " << numeric_limits<float>::is_iec559 << '\n'
              << "double is iec559: " << numeric_limits<double>::is_iec559 << '\n'
              << "int has infinity: " << numeric_limits<int>::has_infinity << '\n'
              << "long has infinity: " << numeric_limits<long>::has_infinity << '\n'
              << "float has infinity: " << numeric_limits<float>::has_infinity << '\n'
              << "double has infinity: " << numeric_limits<double>::has_infinity << '\n'
              << "float has quiet NaN: " << numeric_limits<float>::has_quiet_NaN << '\n'
              << "double has quiet NaN: " << numeric_limits<double>::has_quiet_NaN << '\n'
              << "float has signaling NaN: " << numeric_limits<float>::has_signaling_NaN << '\n'
              << "double has signaling NaN: " << numeric_limits<double>::has_signaling_NaN << '\n';

    return 0;
}