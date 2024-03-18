/*__________________________PROBLEM__________________________*/
/*
XOR Pair

Given an array arr of positive element having size N and an integer C. Check if there exists a pair
(A,B) such that A xor B = C.
Input :
First line of input contains number of testcases T. The 1 line of each testcase contains a
two integers N and C. The 2 line of each testcase, contains N space separated integers denoting
the elements of the array A.
Output:
Print "Yes" is the pair exists else print "No" without quotes.(Change line after every answer).
Your Task:
This is a function problem. You only need to complete the functon pairExists that takes arr, n, and c
as arguments and returns true if a pair exists, else it returns false. The Yes and No printing is done
by the driver code.
Constraints:
1 <= T <= 100
1 <= N <= 10
1 <= C <= 10
0 <= arr[i] <= 10
Example:
Input:
2
7 7
2 1 10 3 4 9 5 
5 1
9 9 10 10 3 
Output:
Yes
No
Explanation :
Testcase1: Pair (2,5) give 7. Hence answer is "Yes".
Testcase2: No pair exist such that satisfies the condition hence the answer is "No".
*/

/*__________________________PROGRAM__________________________*/
//{ Driver Code Starts
//Initial Template for C++



#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//User function Template for C++

// Function to check if there exists a pair (A,B) such that A xor B = C
bool pairExists(int arr[], int n, int c) {
    unordered_set<int> seen; // Create an unordered set to store elements seen so far

    // Iterate through the array
    for (int i = 0; i < n; ++i) {
        int complement = c ^ arr[i]; // Calculate the complement of the current element
        if (seen.find(complement) != seen.end()) { // If the complement exists in the set, return true
            return true;
        }
        seen.insert(arr[i]); // Otherwise, insert the current element into the set
    }

    return false; // If no such pair is found, return false
}

//{ Driver Code Starts.

int main(){
   
    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;

        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            
        }
        
        pairExists(arr,n,c)? cout<<"Yes":cout<<"No";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends