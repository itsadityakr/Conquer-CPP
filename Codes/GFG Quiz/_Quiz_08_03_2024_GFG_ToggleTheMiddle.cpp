/*__________________________PROBLEM__________________________*/
/*
Toggle The Middle

You are given a number N. You need to toggle the middle bit of N in binary form and print the result
in decimal form.
If number of bits in binary form of N are odd then toggle the middle bit (Like 111 to 101).
If number of bits in binary form of N are even then toggle both the middle bits (Like 1111 to
1001)
Note: Toggling a bit means converting a 0 to 1 and vice versa.
Input Format:
The first line of input contains T denoting the number of testcases. T testcases follow. Each
testcase contains a single number N.
Output Format:
For each testcase, in a new line, print the decimal form after toggling the middle bit of N.
Your Task:
This is a function problem. You only need to complete the function toggleTheMiddle that takes n as
argument and returns the element obtained after toggling the middle.
Constraints:
1 <= T <= 100
1 <= N <= 10
Examples:
Input:
5
1
2
3
4
5
Output:
0
1
0
6
7
Examples:
Testcase1: N=1. Binary is 1. Toggle the middle bit: 0. 0 in decimal is 0.
Testcase2: N=2. Binary is 10. Toggle the middle bits: 01. 01 in decimal is 1.
Testcase3: N=3. Binary is 11. Toggle the middle bits: 00. 00 in decimal is 0.
Testcase4: N=4. Binary is 100. Toggle the middle bit: 110. 110 in decimal is 6.
Testcase5: N=5. Binary is 101. Toggle the middle bit: 111. 111 in decimal is 7.

*/

/*__________________________PROGRAM__________________________*/
// Include the necessary header files
#include <bits/stdc++.h>
using namespace std;

// Function to toggle the middle bit(s) of a given integer
int toggleTheMiddle(int n) {
    // Count the number of bits in n
    int numBits = log2(n) + 1;
    
    // Check if the number of bits is odd or even
    if (numBits % 2 == 1) {
        // If odd, toggle the middle bit by XORing with 1 shifted to the middle position
        return n ^ (1 << (numBits / 2));
    } else {
        // If even, toggle both middle bits by XORing with 1 shifted to the middle positions
        return n ^ ((1 << (numBits / 2)) | (1 << (numBits / 2 - 1)));
    }
}

// Main function
int main() {
    // Input the number of test cases
    int testcases;
    cin >> testcases;
    
    // Iterate through each test case
    while (testcases--) {
        int n;
        cin >> n; // Input the integer
        
        // Call the toggleTheMiddle function and output the result
        cout << toggleTheMiddle(n) << endl;
    }
    
    return 0;
}
