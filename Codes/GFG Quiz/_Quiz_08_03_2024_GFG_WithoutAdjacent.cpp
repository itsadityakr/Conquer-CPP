/*__________________________PROBLEM__________________________*/
/*
Without Adjacent

Given an array arr[] of N positive integers. The task is to find a subsequence with maximum sum
such that there should be no adjacent elements from the array in the subsequence.
Input Format:
First line of input contains number of testcases T. For each testcase, first line of input contains size
of array N. Next line contains N elements of the array space seperated.
Output Format:
For each testcase, in a new line, print the maximum sum of the subsequence.
Your Task:
This is a function problem. You only need to complete the function FindMaxSum that takes arr and
n as arguments and returns the maximum sum without taking adjacents.
Constraints:
1 <= T <= 100
1 <= N <= 10
1 <= arr[i] <= 10
Example:
Input:
2
3
1 2 3
3
1 20 3
Output:
4
20
Explanation:
Testcase 1: Elements 1 and 3 form a subsequence with maximum sum and no elements in the
subsequence are adjacent in the array.
Testcase 2: Element 20 from the array forms a subsequence with maximum sum
*/

/*__________________________PROGRAM__________________________*/

#include <iostream>
using namespace std;

// Function to find the maximum sum of a subsequence with no adjacent elements
long long FindMaxSum(long long arr[], int n) {
    // If there are no elements, return 0
    if (n == 0)
        return 0;
    // If there is only one element, return that element
    else if (n == 1)
        return arr[0];
    
    // Create an array to store the maximum sum of subsequence ending at each index
    long long dp[n];
    
    // Initialize dp array with the first two elements of the input array
    dp[0] = arr[0];
    dp[1] = max(arr[0], arr[1]); // Maximum of the first two elements
    
    // Loop through the array starting from the third element
    for (int i = 2; i < n; i++) {
        // At each index, choose the maximum between:
        // 1. The maximum sum obtained so far (dp[i - 1])
        // 2. The sum of the current element and the maximum sum obtained two elements ago (dp[i - 2] + arr[i])
        dp[i] = max(dp[i - 1], dp[i - 2] + arr[i]);
    }
    
    // Return the maximum sum of subsequence
    return dp[n - 1];
}

// Driver code
int main() { 
    int t;
    cin >> t; // Input number of test cases
    while(t--) {
        int n;
        cin >> n; // Input size of the array
        long long arr[n]; // Declare an array of size n
        
        // Input array elements
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        // Call FindMaxSum function to find and output the maximum sum of subsequence
        cout << FindMaxSum(arr, n) << endl;
    }
    return 0; 
}

// } Driver Code Ends