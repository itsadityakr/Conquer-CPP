/*__________________________PROBLEM__________________________*/
/*
#### 6. Number of words

Given a string sentence , your task is to return the number of words it contains.

sample input: sentence = "Can you count this"

sample output: 4
*/

/*__________________________PROGRAM__________________________*/
#include <iostream>
using namespace std;

int countWords(char* sentence) {
    int wordCount = 0;

    // Initialize pointer
    int i = 0;

    // Traverse the string
    while (sentence[i] != '\0') {
        // If current character is not a space and the previous one was, it's a word
        if (sentence[i] != ' ' && (i == 0 || sentence[i - 1] == ' ')) {
            wordCount++;
        }
        i++;
    }

    return wordCount;
}

int main() {
    const int MAX_LENGTH = 100;
    char sentence[MAX_LENGTH];

    cout << "Enter a sentence: ";
    cin.getline(sentence, MAX_LENGTH);

    cout << countWords(sentence) << endl;

    return 0;
}
