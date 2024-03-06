// main.cpp
#include <iostream>
#include "_3_1_1_addition.cpp" // Include the file containing the addition function
#include "_3_1_2_subtraction.cpp" // Include the file containing the subtraction function

int main() {
    int a = 10, b = 5;

    // Addition
    std::cout << "Addition : " << add(a, b) << std::endl; // Calls the add function and outputs the result

    // Subtraction
    std::cout << "Subtraction 'a-b' : " << sub(a, b) << std::endl; // Calls the sub function with parameters (a, b) and outputs the result
    std::cout << "Subtraction 'b-a' : " << sub(b, a) << std::endl; // Calls the sub function with parameters (b, a) and outputs the result

    return 0; // Indicates successful execution of the code
}
