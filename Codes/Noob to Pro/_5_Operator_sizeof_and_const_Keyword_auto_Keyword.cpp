#include <bits/stdc++.h> // Include the standard library headers for input-output operations.
#define endl '\n' // Define a macro 'endl' to represent the newline character '\n'.

using namespace std; // Using the standard namespace to avoid prefixing standard library functions with 'std::'.

int main() { // Start of the main function.
    int a; // Declare an integer variable 'a'.
    int b = 5; // Declare and initialize an integer variable 'b' with the value 5.
    float c = 10.21; // Declare and initialize a float variable 'c' with the value 10.21.

    // Using sizeof operator to determine the size of 'a'.
    cout << sizeof(a) << endl; // Output the size of 'a' (in bytes) followed by a newline.

    // Output the sum of 'b' and 'c'.
    cout << b+c << endl; // Output the result of adding 'b' and 'c', followed by a newline.

    // Output the size of the expression 'b+c'.
    cout << sizeof(b+c) << endl; // Output the size of the expression 'b+c' (in bytes), followed by a newline.

    // Output the size of 'c'.
    cout << sizeof(c) << endl; // Output the size of 'c' (in bytes), followed by a newline.

    const int x = 10; // Declare and initialize a constant integer 'x' with the value 10.
    // Attempting to modify the value of 'x' will result in a compilation error.

    return 0; // Return 0 to indicate successful execution of the program.
} // End of the main function.
