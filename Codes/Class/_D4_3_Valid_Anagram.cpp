/*__________________________PROBLEM__________________________*/
/*
#### 3. Valid Anagram

Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

sample input: s = anagram, t = nagaram

sample output: 1

sample input: s = rat, t = car

sample output: 0
*/

/*__________________________PROGRAM__________________________*/
#include <iostream>
#include <string>
using namespace std;

bool isAnagram(string s, string t) {
    int frequency[256] = {0}; // Assuming ASCII characters

    // Count frequency of characters in string s
    for (char ch : s) {
        frequency[ch]++;
    }

    // Decrement frequency of characters in string t
    for (char ch : t) {
        frequency[ch]--;
    }

    // Check if all characters have zero frequency
    for (int i = 0; i < 256; ++i) {
        if (frequency[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    string s, t;
    cout << "Enter the first string: ";
    cin >> s;
    cout << "Enter the second string: ";
    cin >> t;

    cout << "Are the strings anagrams? " << (isAnagram(s, t) ? "Yes" : "No") << endl;

    return 0;
}
