/*__________________________PROBLEM__________________________*/
/*
Learning to be precise

There are times when your answer is a floating point that contains undesired amount of digits after decimal. Here, we'll learn how to get a precise answer out of a floating number. You are given two floating numbers a and b. You need to output a/b and decimal precision of a/b upto 3 places after the decimal point.

Note: You may use setprecision and fixed.

Example:

Input:
a = 5.43
b = 2.653
Output:
2.04674 2.047
Explanation:
Value of a/b is printed with and 
without decimal precision.


User Task:
Your task is to complete the provided function.

Constraints:
1 <= a, b,<= 100
*/

/*__________________________PROGRAM__________________________*/
///{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>

// Include all standard C++ libraries
#define MULTI(a,b) (a*b) //The multiplication macro function.
/*Whenever MULTI(a,b) is encountered, it is replaced by (a*b) during the preprocessing stage*/

using namespace std; // Namespace declaration to avoid writing std:: before standard C++ functions

// Function prototype declaration
void macros(int a, int b);


// } Driver Code Ends
//User function Template for C++

// Function definition for macros
void macros(int a, int b)
{
    // See the macro defined at the top of the code. Use that macro to find a*b
    // Use only macro to complete this task
    // Output the result of a*b using the defined macro
    cout << MULTI(a, b) << endl;
}

//{ Driver Code Starts.


// Main function
int main() {
    int t;
    cin>>t; // Input the number of test cases
    while(t--)
    {
        int a,b;

        // Input a and b
        cin>>a>>b; 

        // Function call to macros function
        macros(a,b); // Call the macros function to perform the multiplication

    }
    return 0; // Return 0 to indicate successful execution
}
// } Driver Code Ends