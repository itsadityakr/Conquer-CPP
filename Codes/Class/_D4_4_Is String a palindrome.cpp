/*__________________________PROBLEM__________________________*/
/*
#### 4. Is String a palindrome?

Write a program takes a string S as input and prints 1 if it is palindrome or 0 otherwise.

sample input: aabaa

sample output: 1

sample input: abcde

sample output: 0
*/

/*__________________________PROGRAM__________________________*/
#include <iostream>
using namespace std;

bool isPalindrome(char s[], int n) {
    int left = 0, right = n - 1;

    // Check characters from both ends towards the middle
    while (left < right) {
        // If characters at left and right positions are not equal, it's not a palindrome
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    // If loop completes, it's a palindrome
    return true;
}

int main() {
    const int MAX_LENGTH = 100;
    char input[MAX_LENGTH];
    cout << "Enter a string: ";

    // Input string character by character until '\n' is encountered
    int length = 0;
    char ch;
    while (cin.get(ch) && ch != '\n') {
        input[length++] = ch;
    }

    cout << (isPalindrome(input, length) ? "1" : "0") << endl;

    return 0;
}
