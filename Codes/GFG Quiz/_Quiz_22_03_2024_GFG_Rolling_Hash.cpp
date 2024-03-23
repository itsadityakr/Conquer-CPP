/*__________________________PROBLEM__________________________*/
/*
Rolling Hash

You are given a string S and a Pattern P. You need to find all matches of hash of P in string S. Also, print the index (0 based) at
which the pattern's hash is found. If no match is found, print -1.
Note: All the matches should have same length as pattern P.
The hash of pattern P is calculated by summing the values of characters as they appear in the alphabets table. For reference, a is
1, b is 2, ...z is 26. Now, using the mentioned values, hash of ab is 1+2=3.
Input Format:
The first line of input contains T denoting the number of testcases. T testcases follow. Each testcase contains two lines of
input. The first line contains the string S. The second line contains the pattern P.
Output Format:
For each testcase, in a new line, print the matches and index separated by a space. All the matches should be printed in their
own separate lines.
Your Task:
This is a function problem. You only need to complete the function rollingHash that takes string s and string p as arguments and
prints all the matches and their indices in separate lines.
Constraints:
1 <= T <= 100
1 <= |S|, |P| <= 10
Examples:
Input:
1
bacdaabaa
aab
Output:
aab 4
aba 5
baa 6

Explanation:
Testcase1: P is aab, and S is bacdaabaa
Now, the hash of P: aab is 1+1+2=4
In the string S, the hash value of 4 is obtained by the following:
aab=1+1+2=4, at index 4
aba=1+2+1=4, at index 5
baa=2+1+1=4, at index 6
*/

/*__________________________PROGRAM__________________________*/
//Initial Template for C++

#include <iostream>
#include <cmath>
using namespace std;


// } Driver Code Ends
//User function Template for C++

void rollingHash(string s, string p) {
    // If length of pattern is greater than length of string,
    // it's not possible to find any match
    if (p.length() > s.length()) {
        cout << -1 << endl; // Print -1 to indicate no match found
    } else {
        bool flag = false; // A flag to track if any match is found
        int hash = 0; // Hash value of the pattern
        // Calculate the hash value of the pattern
        for (int i = 0; i < p.length(); i++) {
            hash += (int)(p[i] - 'a') + 1; // 'a' has value 1, 'b' has value 2, and so on
        }

        int current_hash = 0; // Hash value of the current substring of the string
        // Calculate the hash value of the first substring of length equal to pattern
        for (int i = 0; i < p.length(); i++) {
            current_hash += (int)(s[i] - 'a') + 1;
        }
        // If the hash value of the first substring matches with the hash value of the pattern
        if (current_hash == hash) {
            // Print the first matching substring and its index (0-based)
            cout << s.substr(0, p.length()) << " " << 0 << endl;
            flag = true; // Set flag to true to indicate a match is found
        }

        // Iterate through the rest of the string
        for (int i = 1; i + p.length() - 1 < s.length() && i < s.length(); i++) {
            // Update the hash value of the current substring by removing the contribution of the first character
            // and adding the contribution of the next character
            current_hash += (int)(s[i + p.length() - 1] - 'a') + 1 - ((int)(s[i - 1] - 'a') + 1);
            // If the hash value of the current substring matches with the hash value of the pattern
            if (current_hash == hash) {
                // Print the matching substring and its index (0-based)
                cout << s.substr(i, p.length()) << " " << i << endl;
                flag = true; // Set flag to true to indicate a match is found
            }
        }
        // If no match is found, print -1
        if (!flag) {
            cout << -1 << endl;
        }
    }
}


//{ Driver Code Starts.


int main() {
    int t; // Variable to store the number of test cases
    cin>>t; // Read the number of test cases
    while(t--) // Loop through each test case
    {
        string s; // Declare a string to store the main string
        cin>>s; // Read the main string
        string pattern; // Declare a string to store the pattern
        cin>>pattern; // Read the pattern
        rollingHash(s,pattern); // Call the function to find pattern matches using rolling hash
    }
    return 0; // Return 0 to indicate successful completion
}
// } Driver Code Ends