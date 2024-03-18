/*__________________________PROBLEM__________________________*/
/*
K Sum

You are given an array of integers. Find the sum of first K smallest numbers.
Input :
First line of input contains number of testcases T. The 1 line of each testcase contains a
two integers N denoting the number of elements in the array A and K. The 2 line of each
testcase, contains N space separated integers denoting the elements of the array A.
Output :
For each testcase, in a new line, you need to print the sum of K smallest numbers.
Your Task:
This is a function problem. You need to complete the function kSum that takes a, n, and k as
arguments and returns the sum of first K smallest numbers.
Constraints :
1 <= T <= 50
1 <= N <= 10
1 <= K <= N
0 <= A[i] <= 10
Example :
Input :
2
6 4
1 3 4 1 3 8
2 2
5 5
Output :
8
10
Explaination :
Testcase1: Sum of first 4 smallest numbers is 1+1+3+3 = 8
Testcase2: Sum of first 2 smallest numbers is 5+5=10
*/

/*__________________________PROGRAM__________________________*/

//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++


long long kSum(int a[], int n, int k)
{
    sort(a, a + n);
    long long sum = 0;
    for(int i = 0; i < k; ++i) {
        sum += a[i];
    }
    return sum;

}
//{ Driver Code Starts.


int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        
        cout<<kSum(a,n,k)<<endl;
        
    }
    return 0;
    
}
// } Driver Code Ends