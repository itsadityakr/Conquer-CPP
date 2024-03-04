/*__________________________PROBLEM__________________________*/
/*
The Conversion To One
Accuracy: 36.0% Submissions: 50+ Points: 100
You are given a number N. You need to convert it to 1 in minimum number of operations.
The operations allowed are as follows:
If N is even then divide the number by 2.
If N is odd then you can either add 1 to it or subtract 1 from it.
Using the above operations, find the minimum number of operations require to convert N to 1.
Input Format:
The first line of input contains T denoting the number of testCases. T testCases follow. Each
testCase contains 1 line of input containing N.
Output Format:
For each testCase, in a new line, print the minimum number of steps required.
Your Task:
This is a function problem. You only need to complete the function minOperations that takes n as
parameter and returns the minimum number of operations required.
Constraints:
1 <= T <= 100
1 <= N <= 10
Examples:
Input:
4
1
2
3
4
Output:
0
1
2
2
7

Explanation:
Testcase1: 1 can be converted into 1 in 0 steps.
Testcase2: 2 can be converted into 1 in 1 step: 2->1
Testcase3: 3 can be converted to 1 in 2 steps: 3->2->1
Testcase4: 4 can be converted to 1 in 2 steps: 4->2->1//{ Driver Code Starts
*/

/*__________________________PROGRAM__________________________*/

//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

long long minOperations(long long n) {
    // Base case: if n is 1, return 0 (no operations needed)
    if (n == 1) return 0;
    // If n is even, divide it by 2 and call recursively
    if (n % 2 == 0) return 1 + minOperations(n / 2);
    // If n is odd, find minimum of adding 1 or subtracting 1
    return 1 + min(minOperations(n + 1), minOperations(n - 1));
}


//{ Driver Code Starts.



int main() {
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        long long n;
        cin>>n;
        cout<<minOperations(n)<<endl;
        
        
    }
	return 0;
}
// } Driver Code Ends
