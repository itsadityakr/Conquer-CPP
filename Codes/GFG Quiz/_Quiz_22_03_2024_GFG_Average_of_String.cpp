/*__________________________PROBLEM__________________________*/
/*
Average of String

You are given a string S. You need to find the floor of average of the string.
Average of string is given by AVG=(sum of ASCII values of all characters)/(length of string)
Input Format:
The first line of input contains T denoting the number of testcases. T testcases follow. Each testcase contains a single line of
input containing S.
Output Format:
For each testcase, in a new line, print the floor of average of S.
Your Task:
This is a function problem. You need to complete the function avgOfString that takes a string as a parameter and returns avg.
The printing is done by driver code.
Constraints:
1 <= T <= 100
1 <= |S| <= 10
Examples:
Input:
2
aaaa
abcd
Output:
97
98

Explanation:
Testcase1: The ASCII value of a is 97. So sum of ASCII values of the given string is 97+97+97+97=388
Now divide the sum by length of string. This gives 388/4=97. Finally, take floor of the average, so floor(97)=97
*/

/*__________________________PROGRAM__________________________*/
#include <iostream> // Include necessary header files
#include <cmath>
using namespace std; // Allow the use of names from the std namespace without prefixing them

// } Driver Code Ends
// User function Template for C++

// Function to calculate the floor of the average of the ASCII values of characters in a string
int avgOfString(string s) {
    int sum = 0; // Variable to store the sum of ASCII values
    for (char c : s) { // Loop through each character in the string
        sum += int(c); // Add the ASCII value of the character to the sum
    }
    int length = s.length(); // Calculate the length of the string
    int avg = sum / length; // Calculate the average by dividing the sum by the length of the string
    return avg; // Return the average
}

//{ Driver Code Starts.

int main() {
    int t; // Variable to store the number of test cases
    cin>>t; // Read the number of test cases
    while(t--) // Loop through each test case
    {
        string s; // Declare a string to store input
        cin>>s; // Read the input string
        cout<<avgOfString(s)<<endl; // Print the floor of the average of the ASCII values of characters in the string
    }
    return 0; // Return 0 to indicate successful completion
}

// } Driver Code Ends
