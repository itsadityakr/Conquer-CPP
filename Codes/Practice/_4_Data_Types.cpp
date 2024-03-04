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
    // float Keyword `float` specifies the data type.
    // p Identifier `p` is the variable to store the result of the division.
    float p = b / c ; //do b/c
    
    // double Keyword `double` specifies the data type.
    // q Identifier `q` is the variable to store the result of the division.
    double q =  b / a; //do b/a
    
    // int Keyword `int` specifies the data type.
    // r Identifier `r` is the variable to store the result of the division.
    int r =   c / a; //do c/a
    
    // long Keyword `long` specifies the data type.
    // long long Keyword `long long` specifies the data type for larger integers.
    // m Identifier `m` is the variable to store the sum of two integers.
    long long m = r + l ; //do r+l
    
    //cout Keyword `cout` is used to print output to the console.
    //<< Keyword `<<` is used to insert data into the output stream.
    //p Identifier `p` is the variable containing the result of the division.
    //q Identifier `q` is the variable containing the result of the division.
    //r Identifier `r` is the variable containing the result of the division.
    //m Identifier `m` is the variable containing the sum of two integers.
    //endl Identifier `endl` represents the end of a line in the output stream.
    cout << p << " " << q << " " << r <<" "<< m <<endl;
    
    //cout Keyword `cout` is used to print output to the console.
    //<< Keyword `<<` is used to insert data into the output stream.
    //d Identifier `d` is the variable containing the string.
    //d[3] Identifier `d[3]` represents the character at index 3 in the string.
    cout << d << " " << d[3] << endl; //write 3 for index

}

//{ Driver Code Starts.
 
//int Keyword `int` specifies the data type.
//main Identifier `main` is the name of the main function.
int main()
{
    //int Keyword `int` specifies the data type.
    //a Identifier `a` is the variable to store an integer.
    int a;
    //float Keyword `float` specifies the data type.
    //b Identifier `b` is the variable to store a floating-point number.
    float b;
    //double Keyword `double` specifies the data type.
    //c Identifier `c` is the variable to store a double precision floating-point number.
    double c;
    //long Keyword `long` specifies the data type.
    //long long Keyword `long long` specifies the data type for larger integers.
    //l Identifier `l` is the variable to store a long long integer.
    long long l;
    //string Keyword `string` specifies the data type.
    //d Identifier `d` is the variable to store a string.
    string d;
    
    //int Keyword `int` specifies the data type.
    //t Identifier `t` is the variable to store the number of test cases.
    int t;
    //cin Keyword `cin` is used to take input from the user.
    //>> Operator `>>` is used to extract input from the input stream.
    cin >> t;
    
    //while Keyword `while` is used to create a loop that executes a block of code as long as the condition is true.
    //() Parentheses `()` are used to enclose the condition.
    while(t--){
        
        //cin Keyword `cin` is used to take input from the user.
        //>> Operator `>>` is used to extract input from the input stream.
        //a Identifier `a` is the variable to store an integer.
        //b Identifier `b` is the variable to store a floating-point number.
        //c Identifier `c` is the variable to store a double precision floating-point number.
        //l Identifier `l` is the variable to store a long long integer.
        //d Identifier `d` is the variable to store a string.
        cin >> a >> b >> c >> l >> d;
    
        //dataTypes Identifier `dataTypes` is the name of the function.
        //a Identifier `a` is passed as an argument to the function.
        //b Identifier `b` is passed as an argument to the function.
        //c Identifier `c` is passed as an argument to the function.
        //l Identifier `l` is passed as an argument to the function.
        //d Identifier `d` is passed as an argument to the function.
        dataTypes(a, b, c, l, d);
    }
    
    //return Keyword `return` signifies the end of the function and returns a value.
    //0 Literal `0` represents a numerical value.
    return 0;
// } Keyword `}` denotes the end of a block of code.
} 
// } Keyword `}` denotes the end of a block of code.
// Driver Keyword `Driver` indicates that this is the driver code.
//Code Keyword `Code` specifies the segment of code.
//Ends Keyword `Ends` signifies the conclusion.
