#include <bits/stdc++.h> // Includes almost all necessary libraries
/*iomanip - to manipulate input and output*/
#define endl '\n' // Defines newline character as '\n', which is faster than endl;
#define PI 3.14159265359 // Defines a constant value for PI
using namespace std;

int main() {
    int a; // Declares an integer variable 'a'
    cout << "Enter Value of A : "; // Outputs a message to prompt the user to enter a value for 'a'
    cin >> a; // Takes input from the user and stores it in 'a'
    cout << "Hello, world!" << endl << "The value you inserted is : "<<a<<endl; // Outputs a greeting message and displays the value of 'a'
    cout <<"PI actual value is : "<<PI<<endl; // Outputs the actual value of PI
    cout <<"PI value without 'fixed' is : "<<fixed<<PI<<endl; // Outputs the value of PI without fixed precision
    cout <<"PI value with only 'fixed' is : "<<fixed<<PI<<endl; // Outputs the value of PI with fixed precision
    cout <<"PI Value without 'setprecision' is : " <<PI<<endl; // Outputs the value of PI without specifying precision
    cout <<"PI Value after 'setprecision(5)' is : " <<setprecision(5)<<PI<<endl; // Outputs the value of PI with precision set to 5
    cout <<"PI Value after 'setprecision(20)' is : " <<setprecision(20)<<PI<<endl; // Outputs the value of PI with precision set to 20
    cout <<"PI Value after 'setprecision(3) << fixed' is : "<< setprecision(3) << fixed <<PI<<endl; // Outputs the value of PI with precision set to 3 and fixed precision mode
    cout <<"PI Value after 'setprecision(15) << fixed' is : "<< setprecision(15) << fixed <<PI<<endl; // Outputs the value of PI with precision set to 15 and fixed precision mode
    return 0; // Indicates successful execution of the code
}
