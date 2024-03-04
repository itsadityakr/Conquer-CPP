/*__________________________PROBLEM__________________________*/
/*
Learn to Comment

Comments are very useful in any language to tell a user what is the task of any function or operation. The comments are neglected by the compiler, so whatever you write in the comments won't have any effect on the working of a code. In C/C++, comments can be written as mentioned below:

//This is a comment
//This is also a comment

Example:

Input:
a = 5
b = 6
c = 15
Output:
5
15
Explanation:
Value of b is not printed.


Your Task:
Your task is to complete a function that prints a, b, and c. Comment the code that outputs b, so only a and c gets printed.

Constraints:
1 <= a <= 106
1 <=b <= 106
1 <= c<= 106
*/

/*__________________________PROGRAM__________________________*/
//{ Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;
 
void comment(int,int,int);


// } Driver Code Ends
//User function Template for C++

//Comment the part that outputs b
void comment(int a,int b,int c)
{
    cout<<a<<endl;
    //cout<<b<<endl;
    cout<<c<<endl;
}

//{ Driver Code Starts.
 
int main()
{
   
    
    int t;
    cin >> t;
    
    while(t--){
        int a, b, c;
        cin>>a>>b>>c;
        
        //function call
        comment(a, b, c);
    }
    
    return 0;
} 
// } Driver Code Ends