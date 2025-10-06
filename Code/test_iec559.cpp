#include <iostream>
#include <limits>
using namespace std;
 
int main()
{
    float number1 = 2.5, number2 = 6.0, negativeNumber = -2.0, zero = 0;
    cout << boolalpha
              << "int is iec559: " << numeric_limits<int>::is_iec559 << '\n'
              << "float is iec559: " << numeric_limits<float>::is_iec559 << '\n';

    return 0;
}