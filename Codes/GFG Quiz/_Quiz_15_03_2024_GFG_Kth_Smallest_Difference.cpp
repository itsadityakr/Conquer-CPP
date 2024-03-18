/*__________________________PROBLEM__________________________*/
/*
Kth Smallest Difference

You are given an array of integers. Consider absolute difference between all the pairs of the the
elements. You need to find K smallest absolute difference.If the size of the array is N then value
of K will be less than N and more than or equal to 1.
Note: All the differences between pairs are considered to be different.
Input Format:
First line of input contains number of testcases T. The 1 line of each testcase contains a
two integers N and K denoting the number of elements in the array A and difference you need to
output . The 2 line of each testcase, contains N space separated integers denoting the elements
of the array A.
Output Format:
For each test case, in a new line, output K smallest absolute difference.
Your Task:
This is a function problem. You only need to complete the function kthDiff that takes a, n, k as
parameters and returns the kth smallest absolute difference. The printing is done by the driver
code.
Constraints:
1<= T <= 10
2 <= N <= 10
1 <= K < N
0 <= A[i] <= 10
Example:
Input :
2
6 2
1 3 4 1 3 8
2 1
8 9
Output :
0
1

Explanation :
Testcase1: First smallest difference is 0 , between the pair (1,1) and second smallest absolute
difference difference is also 0 between the pairs (3,3).
Testcase2: The first smallest absolute difference is 9-8 = 1.
*/

/*__________________________PROGRAM__________________________*/
//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//User function Template for C++

// Function to count pairs with absolute difference less than or equal to mid
int countPairs(int a[], int n, int mid) {
    int count = 0, left = 0;
    for (int right = 1; right < n; right++) {
        while (a[right] - a[left] > mid)
            left++;
        count += right - left;
    }
    return count;
}

// Function to find the kth smallest absolute difference
int kthDiff(int a[], int n, int k) {
    sort(a, a + n); // Sort the array a in ascending order

    int low = 0; // Initialize low to 0
    int high = a[n - 1] - a[0]; // Initialize high to the maximum possible difference

    // Binary search to find the kth smallest absolute difference
    while (low < high) {
        int mid = low + (high - low) / 2; // Calculate mid

        // Count pairs with absolute difference less than or equal to mid
        if (countPairs(a, n, mid) < k) {
            low = mid + 1; // If the count is less than k, move low to mid + 1
        } else {
            high = mid; // If the count is greater than or equal to k, move high to mid
        }
    }

    return low; // Return low as it contains the kth smallest absolute difference
}
//{ Driver Code Starts.


int main() 
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        
        cout<<kthDiff(a,n,k)<<endl;
    }
	return 0;
}
// } Driver Code Ends