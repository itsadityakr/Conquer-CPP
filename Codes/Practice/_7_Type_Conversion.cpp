/*__________________________PROBLEM__________________________*/
/*
Type Conversion

Given a double value d, typecast it to an integer value.

Example 1:

Input:
d = 10.23
Output:
10
Explanation:
The integer value of 10.23 is 10
 

Your Task:

You don't need to read input or print anything.Your task is to complete the function typeCast() which converts the double value to integer and returns an integer. 
*/

/*__________________________PROGRAM__________________________*/
//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
// Include all standard C++ libraries
using namespace std;
// } Driver Code Ends
//User function Template for C++

// Function definition for typeCast
int typeCast(double d){
    
    // This function typecasts a double to an integer
    return int(d); // Typecast double d to integer and return the result
    
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
        //double Keyword `double` specifies the data type.
        //d Identifier `d` is the variable to store a floating-point number.

        // Input d
        //cin Keyword `cin` is used to take input from the user.
        //>> Operator `>>` is used to extract input from the input stream.
        //d Identifier `d` is the variable to store a floating-point number.
		double d;
		cin>>d;
        
        // Call the typeCast function and store the result in answer
        //answer Identifier `answer` is the variable to store the result of typeCast function.
		int answer = typeCast(d);
        
        // Output the result of typeCast
        //cout Keyword `cout` is used to print output to the console.
        //<< Operator `<<` is used to insert data into the output stream.
        //answer Identifier `answer` is the variable containing the result of typeCast function.
        //endl Keyword `endl` represents the end of a line in the output stream.
        cout<<answer<<endl;
	}
	
}
// } Driver Code Ends
