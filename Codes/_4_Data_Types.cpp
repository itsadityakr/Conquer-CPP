/*__________________________PROBLEM__________________________*/
/*
Data Types

Working with Data Types is very important in the programming world. Here, we will learn to manipulate the basic data types in CPP.
You will be given four different variables of different data types: a (int), b (float), c (double), l (long long), d (string). Your task is to do step-wise operations as given below:
1. Divide b by c.
2. Divide b by a.
3. Divide c by a (cast to int).
4. Add result of step 3 with l.
5. Print the given string, and the 4th (0-based indexing) character of the string both separated by a space.

Example 1:

Input:
1 2 3 5
gfgc
Output:
0.666667 2 3 8 
gfgc c
Explanation: a = 1, b = 2, c = 3,
l = 5, d = gfgc
b/c = 0.666667
b/a = 2
c/a = 3
(c/a)+l = 8
d = gfgc
d[3] = c

Your Task:
Don't worry about the taking input. Just complete the function dataTypes(int a, float b, double c, long long l, string d)

Constraints:
1 <= a, b, c <= 106
1 <= l <= 1018
*/

/*__________________________PROGRAM__________________________*/
//{ Driver Code Starts
//Initial Template for C++

//{ Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;
 
void dataTypes(int, float, double, long long, string);


// } Driver Code Ends
//User function Template for C++

// Function to check and print data types accordingly
void dataTypes(int a, float b, double c, long long l, string d){
    
    // Some statements have been given to you
    // to help you understand data types
    // Please complete the same for correct result
    // Or you can delete and write your own
    float p = b/c ; //do b/c
    
    double q =  b/a; //do b/a
    
    int r =   c/a; //do c/a
    
    long long m = r+l ; //do r+l
    
    cout << p << " " << q << " " << r <<" "<< m <<endl;
    
    cout << d << " " << d[3] << endl; //write 3 for index

}

//{ Driver Code Starts.
 
int main()
{
    int a;
    float b;
    double c;
    long long l;
    string d;
    
    int t;
    cin >> t;
    
    while(t--){
        
        cin >> a >> b >> c >> l >> d;
    
        dataTypes(a, b, c, l, d);
    }
    
    return 0;
} 
// } Driver Code Ends