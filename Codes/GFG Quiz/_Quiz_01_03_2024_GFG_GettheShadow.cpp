/*__________________________PROBLEM__________________________*/
/*
Get the Shadow
Accuracy: 42.49% Submissions: 40+ Points: 100
Given an unsorted array A[] of size N of positive integers. One number 'a' from set {1, 2, N} is
missing and one number 'b' occurs twice in array. The task is to find the repeating and the missing.
Input:
The first line of input contains an integer T denoting the number of test cases. The description of T
test cases follows. The first line of each test case contains a single integer N denoting the size of
array. The second line contains N space-separated integers A , A , ..., A denoting the elements
of the array.
Output:
For each testCase, in a new line, print b, which is the repeating number, followed by a, which is the
missing number, in a single line.
Your Task:
This is a function problem. You only need to complete the function solve that takes array length,
N and array, a[ ] as parameter and returns a list consists of repeating & missing number
respectively.
Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 10
1 ≤ A[i] ≤ N
Example:
Input:
2
2
2 2
3 
1 3 3
Output:
2 1
3 2
1 2 N
6

Explanation:
Testcase 1: Repeating number is 2 and smallest positive missing number is 1.
Testcase 2: Repeating number is 3 and smallest positive missing number is 2. //{ Driver Code 
*/

/*__________________________PROGRAM__________________________*/

//{ Driver Code Starts
//Initial Template for C++
#include <iostream>
#include <vector>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution {
    public:
    vector<int> solve(int N, vector<int>& a) {
        vector<int> res(2);
        for(int i = 0; i < N; ++i) {
            int index = abs(a[i]) - 1;
            if(a[index] > 0)
            a[index] = -a[index];
        else
        res[0] = abs(a[i]);
}
for(int i = 0; i < N; ++i) {
    if(a[i] > 0) {
        res[1] = i + 1;
        break;
    }
}
return res;
}
};

//{ Driver Code Starts.

int main() {
    int t, n;
    cin >> t;
    
    vector<int> a(1000001);
    
    while(t--) {
        cin >> n;
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        Solution sol;
        vector<int> res = sol.solve(n, a);
        
        cout << res[0] << " " << res[1] << endl;
    }
    
    return 0;
}

// } Driver Code Ends