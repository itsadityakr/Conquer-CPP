/*__________________________PROBLEM__________________________*/
/*
#### 8. Binary String to Decimal

A Binary String is a string consisting of only 0s and 1s that represent a binary number.

Given a binary string s , you need to print the decimal number it represents.

sample input:
s = "10"

sample output: 2
*/

/*__________________________PROGRAM__________________________*/
#include <iostream>
using namespace std;

// Function to convert a binary string to decimal
int binaryToDecimal(char* s) {
    int decimal = 0;

    // Iterate through the characters of the string
    for (int i = 0; s[i] != '\0'; ++i) {
        // Multiply the current decimal value by 2 and add the current bit
        decimal = decimal * 2 + (s[i] - '0');
    }

    return decimal;
}

int main() {
    const int MAX_LENGTH = 100;
    char s[MAX_LENGTH];
    cout << "Enter a binary string: ";
    cin >> s;

    cout << "Decimal representation: " << binaryToDecimal(s) << endl;

    return 0;
}
