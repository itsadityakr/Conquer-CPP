#include <bits/stdc++.h> // Include necessary libraries
#define endl '\n' // Define newline character as '\n'
using namespace std; // Using the standard namespace

#define ELIGIBLE_AGE 18 // Define constant value for eligible age

int main() {
#ifdef ELIGIBLE_AGE // Check if ELIGIBLE_AGE is defined
    int age; // Declare variable 'age'

    cout << "Enter your age: "; // Prompt user to enter their age
    cin >> age; // Read user input for age

    #if defined(ELIGIBLE_AGE) && (ELIGIBLE_AGE <= 0) // Check if ELIGIBLE_AGE is non-negative
        cout << "Invalid age value.\n"; // Output message indicating invalid age value
    #elif defined(ELIGIBLE_AGE) && (ELIGIBLE_AGE > 0) && (age >= ELIGIBLE_AGE) // Check if age is greater than or equal to ELIGIBLE_AGE
        cout << "You are eligible for a driver's license.\n"; // Output message indicating eligibility for a driver's license
    #else // If age is less than ELIGIBLE_AGE
        cout << "You are not eligible for a driver's license.\n"; // Output message indicating ineligibility for a driver's license
    #endif

#else // If ELIGIBLE_AGE is not defined
    cout << "Age eligibility check is not defined.\n"; // Output message indicating that age eligibility check is not defined
#endif

    return 0; // Indicate successful execution of the program
}
