#include <iostream>
#include <string>
using namespace std;

int main() {
    // Integer literals
    // Decimal literals
    int dec1 = 0;
    int dec2 = 78;
    cout << "Decimal literals: " << dec1 << ", " << dec2 << endl;

    // Octal literals
    int oct1 = 045;   // Octal literal (starts with 0)
    int oct2 = 076;   // Octal literal (starts with 0)
    int oct3 = 06210; // Octal literal (starts with 0)
    cout << "Octal literals: " << oct1 << ", " << oct2 << ", " << oct3 << endl;

    // Hexadecimal literals
    int hex1 = 0x23A; // Hexadecimal literal (starts with 0x)
    int hex2 = 0Xb4C; // Hexadecimal literal (starts with 0X)
    int hex3 = 0xFEA; // Hexadecimal literal (starts with 0x)
    cout << "Hexadecimal literals: " << hex1 << ", " << hex2 << ", " << hex3 << endl;

    // Binary literals (available since C++14)
    int bin1 = 0b101; // Binary literal (starts with 0b)
    int bin2 = 0B111; // Binary literal (starts with 0B)
    cout << "Binary literals: " << bin1 << ", " << bin2 << endl;

    // Integer literals with suffixes
    long long int longLongInt = 12345678901234LL;           // long long int suffix
    unsigned int unsignedInt = 4294967295U;                 // unsigned int suffix
    long int longInt = 2147483647L;                         // long int suffix
    unsigned long int unsignedLongInt = 4294967295UL;       // unsigned long int suffix
    long long int longLongInt2 = 9223372036854775807LL;     // long long int suffix
    unsigned long long int unsignedLongLongInt = 18446744073709551615ULL; // unsigned long long int suffix

    cout << "Integer literals with suffixes:" << endl;
    cout << "long long int: " << longLongInt << endl;
    cout << "unsigned int: " << unsignedInt << endl;
    cout << "long int: " << longInt << endl;
    cout << "unsigned long int: " << unsignedLongInt << endl;
    cout << "long long int: " << longLongInt2 << endl;
    cout << "unsigned long long int: " << unsignedLongLongInt << endl;

    // Floating-Point Literal
    const float floatVal = 4.14;
    cout << "Floating-point literal: " << floatVal << endl;

    // Character Literal
    char chr = 'G';       // Character literal
    wchar_t wideChr = L'F'; // Wide-character literal
    cout << "Character literals: " << chr << ", " << wideChr << endl;

    // String Literal
    const string str = "Welcome\nTo\nGeeks\tFor\tGeeks"; // String literal
    cout << "String literal:\n" << str << endl;

    // Boolean Literals
    bool isTrue = true;    // Boolean literal representing true
    bool isFalse = false;   // Boolean literal representing false
    cout << "Boolean literals: " << isTrue << ", " << isFalse << endl;

    return 0;
}
