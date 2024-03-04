/*__________________________PROBLEM__________________________*/
/*
#### 7. Longest Common Prefix

Write a Program to find the longest common prefix string amongst an array of strings of length N.

If there is no common prefix, print an empty string "".

sample input:
N = 3

strs[] = ["flower", "flow", "flight"]

sample output: "fl"
*/

/*__________________________PROGRAM__________________________*/
#include <iostream>
#include <string>
using namespace std;

// Function to find the longest common prefix among an array of strings
string longestCommonPrefix(string strs[], int N) {
    // If array is empty, return empty string
    if (N == 0) {
        return "";
    }

    // Take the first string as initial prefix
    string prefix = strs[0];

    // Iterate through the strings starting from the second one
    for (int i = 1; i < N; ++i) {
        int j = 0;
        // Compare characters of prefix with the current string
        while (j < prefix.length() && j < strs[i].length() && prefix[j] == strs[i][j]) {
            j++;
        }
        // Update prefix to the common part
        prefix = prefix.substr(0, j);
        // If prefix becomes empty, break as there is no common prefix
        if (prefix.empty()) break;
    }

    return prefix;
}

int main() {
    int N;
    cout << "Enter the number of strings: ";
    cin >> N;

    string strs[N];
    cout << "Enter the strings: ";
    for (int i = 0; i < N; ++i) {
        cin >> strs[i];
    }

    string prefix = longestCommonPrefix(strs, N);
    cout << "Longest common prefix: " << prefix << endl;

    return 0;
}
