// Jordan Bailey
// CIS 1202 101
// 7-22-24

#include <iostream>
#include <cmath>            // Header files
using namespace std;

/*
Function templates are special functions that can operate with generic types. This allows us to create a function template whose functionality can be adapted to more than one type or class without repeating the entire code for each type.
*/





// For floating-point types (float, double), return half of the value passed in as argument
template <typename T>
T half(T value) {
    return value / 2.0;
}


// For integer types (int), return half the value, rounded according to usual rounding rules (0.5 or higher, round up; otherwise round down.)
int half(int value) {
    return static_cast<int>(round(static_cast<double>(value) / 2.0));  // static_cast
}


// ===================================================================================================================


int main() {
    double a = 7.0;
    float b = 5.0f;
    int c = 3;

    cout << half(a) << endl;
    cout << half(b) << endl;
    cout << half(c) << endl;

    return 0;
}