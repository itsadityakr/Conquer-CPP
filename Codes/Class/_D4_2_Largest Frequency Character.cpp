/*__________________________PROBLEM__________________________*/
/*
#### 2. Largest Frequency character

Write a program takes a string S as input and prints largest frequency character.

sample input: abbbccccdd

sample output: c

sample input: avddda

sample output: d

*/

/*__________________________PROGRAM__________________________*/
#include <iostream>
#include <string>
using namespace std;

char largestFrequencyChar(string s) {
    const int SIZE = 256; // Assuming ASCII characters
    int frequency[SIZE] = {0};

    char maxChar = '\0';
    int maxFrequency = 0;

    // Count frequency of each character
    for (char ch : s) {
        frequency[ch]++;
        if (frequency[ch] > maxFrequency) {
            maxFrequency = frequency[ch];
            maxChar = ch;
        }
    }
    return maxChar;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    char largestChar = largestFrequencyChar(input);
    cout << "Largest frequency character: " << largestChar << endl;

    return 0;
}
