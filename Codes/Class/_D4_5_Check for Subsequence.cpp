/*__________________________PROBLEM__________________________*/
/*
#### 5. Check for Subsequence

Given two strings str1 and str2, find if str1 is a subsequence of str2.

A subsequence is a sequence that can be derived from another sequence by deleting some elements without changing the order of the remaining elements.

sample input: str1 = "AXY", str2 = "ADXCPY"

sample output: 1

sample input: str1 = "AXY", str2 = "YADXCP"

sample output: 0
*/

/*__________________________PROGRAM__________________________*/
#include <iostream>
using namespace std;

bool isSubsequence(char* str1, char* str2) {
    // Initialize pointers for both strings
    int i = 0, j = 0;

    // Traverse both strings
    while (str1[i] != '\0' && str2[j] != '\0') {
        // If characters match, move to next character in str1
        if (str1[i] == str2[j])
            i++;
        // Move to next character in str2
        j++;
    }

    // If all characters of str1 are found in str2, return true
    return str1[i] == '\0';
}

int main() {
    const int MAX_LENGTH = 100;
    char str1[MAX_LENGTH], str2[MAX_LENGTH];
    
    cout << "Enter str1: ";
    cin >> str1;
    cout << "Enter str2: ";
    cin >> str2;

    if (isSubsequence(str1, str2))
        cout << "1" << endl;
    else
        cout << "0" << endl;

    return 0;
}
