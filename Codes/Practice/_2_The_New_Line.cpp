/*__________________________PROBLEM__________________________*/
/*
The New Line

You are familiar with producing output using C++/C. In this task, you'll be required to write three messages in three separate lines. Write Geeks for Geeks. But wait a minute!! You need to write each word of it in a separate line.


Example 1:

Input:No Input
Output:
Geeks
for
Geeks
Explanation: First word of the statement
is in first line, next word is in next
line, and last is in last line.


Your Task:

In the function printInNewLine(), output each word of Geeks for Geeks in a separate line.
*/

/*__________________________PROGRAM__________________________*/
//{ Driver Code Starts
//Initial Template for C++

#include<iostream>
using namespace std;

void printNewLine();


// } Driver Code Ends
//User function Template for C++

// Function to print each word in new line

void printNewLine(){

    cout << "Geeks" << endl; // Print "Geeks" followed by a newline
    cout << "for" << endl;   // Print "for" followed by a newline
    cout << "Geeks" << endl; // Print "Geeks" followed by a newline
    
}

//{ Driver Code Starts.

int main(){

    // Function call to print each word in new line
    printNewLine();

}
// } Driver Code Ends
