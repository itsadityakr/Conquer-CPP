#include <bits/stdc++.h> // Includes necessary libraries
#define endl '\n' // Defines newline character as '\n'
using namespace std;

// Macros
#define PI 3.14159265359 // Defines a constant value for PI
#define AREA(r) (PI*r*r) // Defines a macro for calculating the area of a circle

int main() {
    cout << PI << endl; // Outputs the value of PI
    double a = AREA(8); // Calculates the area of a circle with radius 8 using the AREA macro
    cout << a << endl; // Outputs the calculated area
    return 0; // Indicates successful execution of the code
}
