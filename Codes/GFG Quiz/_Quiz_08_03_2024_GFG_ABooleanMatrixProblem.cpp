/*__________________________PROBLEM__________________________*/
/*
A Boolean Matrix Problem

You are given a matrix Mat of m rows and n columns. The matrix is boolean so the elements of the
matrix can only be either 0 or 1.
Now, if any row of the matrix contains a 1, then you need to fill that whole row with 1. After doing
the mentioned operation, you need to print the modified matrix.
Input Format:
The first line of input contains T denoting the number of testcases. T testcases follow.
The first line of each testcase contains m and n denoting number of rows and number of columns.
Then next m lines contain n elements denoting the elements of the matrix.
Output Format:
For each testcase, in a new line, print the modified matrix.
Your Task:
This is a function problem. You only need to complete the function boolean matrix that takes mat,
m, n as parameters and changes the mat as per the instructions. The printing is done by the driver
code.
Constraints:
1 <= T <= 100
1 <= m, n <= 900
Mat ∈ {0,1}
Examples:
Input:
2
5 4
1 0 0 0
0 0 0 0
0 1 0 0
0 0 0 0
0 0 0 1
1 2
0 0
Output:
1 1 1 1
0 0 0 0
1 1 1 1
0 0 0 0
1 1 1 1
0 0
Explanation:
Testcase1: rows = 5 and columns = 4
The given matrix is
1 0 0 0
0 0 0 0
0 1 0 0
0 0 0 0
0 0 0 1
Evidently, the first row contains a 1 so fill the whole row with 1. The third row also contains a 1 so
that row will be filled too. Finally, the last row contains a 1 and therefore it needs to be filled with
1 too.
The final matrix is
1 1 1 1
0 0 0 0
1 1 1 1
0 0 0 0
1 1 1 1
Tescase2: rows = 1 and columns = 2
The given matrix is
0 0
Now, since there is no 1 present so we don't change the matrix.
*/

/*__________________________PROGRAM__________________________*/
// Include necessary header files
#include <bits/stdc++.h>
#define ROWS 901
#define COLS 901
using namespace std;

int mat[901][901]; // Global declaration of matrix to avoid redeclaration for each testcase

// Function to modify the matrix based on the presence of 1s in each row
void booleanMatrix(int mat[ROWS][COLS], int m, int n) {
    // Create an array to keep track of whether each row needs to be filled with 1s
    bool fillRow[m] = {false};
    
    // Iterate over each row of the matrix
    for (int i = 0; i < m; i++) {
        // Check if the current row contains at least one 1
        for (int j = 0; j < n; j++) {
            if (mat[i][j] == 1) {
                // If 1 is found, mark the row to be filled with 1s
                fillRow[i] = true;
                break;
            }
        }
    }
    
    // Iterate over each row of the matrix again
    for (int i = 0; i < m; i++) {
        // If the current row needs to be filled with 1s
        if (fillRow[i]) {
            // Set all elements of the row to 1
            for (int j = 0; j < n; j++) {
                mat[i][j] = 1;
            }
        }
    }
}

// Main function
int main() {
    int testcases;
    cin >> testcases; // Input the number of test cases
    
    // Iterate over each test case
    while (testcases--) {
        int m, n;
        cin >> m >> n; // Input the number of rows and columns
        
        // Input the elements of the matrix
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> mat[i][j];
            }
        }

        // Call the booleanMatrix function to modify the matrix
        booleanMatrix(mat, m, n);

        // Output the modified matrix
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
