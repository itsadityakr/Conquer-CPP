/*__________________________PROBLEM__________________________*/
/*
Swap The Numbers

Given two numbers a and b, you need to swap their values so a holds the value of b and b holds the value of a.
Example 1:

Input:
a = 1
b = 2
Output: 
2 1
Explanation: Initially a = 1 and b = 2,
now a = 2 and b = 1.
Example 2:

Input:
a = 6 
b = 7 
Output: 7 6 
Explanation: Initially a = 6 and b = 7,
now a = 7 and b = 6.

Your Task: 
Just write the code to swap values of a and b at the specified place. The input and output are done automatically.
*/

/*__________________________PROGRAM__________________________*/
//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
// Include all standard C++ libraries
using namespace std;
// } Driver Code Ends
//User function Template for C++

// Function definition for utility
void utility(int &a, int &b)
{
    // This function swaps the values of variables a and b using a temporary variable

    int temp = a; // Store the value of a in a temporary variable
    a = b;        // Assign the value of b to a
    b = temp;     // Assign the value stored in the temporary variable to b
}

//{ Driver Code Starts.    

// Main function
int main() {
	
    //int Keyword `int` specifies the data type.
    //t Identifier `t` is the variable to store the number of test cases.
	int t;
    //cin Keyword `cin` is used to take input from the user.
    //>> Operator `>>` is used to extract input from the input stream.
	cin>>t;
    //while Keyword `while` is used to create a loop that executes a block of code as long as the condition is true.
    //() Parentheses `()` are used to enclose the condition.
	while(t--){
        //int Keyword `int` specifies the data type.
        //a Identifier `a` is the variable to store an integer.
        //b Identifier `b` is the variable to store an integer.

        // Input a and b
        //cin Keyword `cin` is used to take input from the user.
        //>> Operator `>>` is used to extract input from the input stream.
        //a Identifier `a` is the variable to store an integer.
        //b Identifier `b` is the variable to store an integer.
		int a, b;
		cin>>a>>b;
        
        // Function call to utility function
        //a Identifier `a` is passed by reference to the function.
        //b Identifier `b` is passed by reference to the function.
		utility(a, b);
        
        // Output the swapped values of a and b
        //cout Keyword `cout` is used to print output to the console.
        //<< Operator `<<` is used to insert data into the output stream.
        //a Identifier `a` is the variable containing an integer.
        //b Identifier `b` is the variable containing an integer.
        //endl Keyword `endl` represents the end of a line in the output stream.
		cout<<a<<" "<<b<<endl;
	}
	
}
// } Driver Code Ends