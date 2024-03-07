#include <iostream> // Include the input/output stream library

using namespace std; // Use the standard namespace

// Global variable declaration
int globalVar; // Declaration of a global variable named globalVar

// Static variable declaration
static int staticVar; // Declaration of a static variable named staticVar
int x = 10; // Declaration and initialization of a global variable named x with value 10

int main() {
    // Local variable declaration
    int localVar; // Declaration of a local variable named localVar
    
    // Definition:
    // When the variable is declared, memory is allocated for it.
    // However, if no explicit initialization is provided, 
    // the variable contains garbage values (unpredictable values).
    
    // Initialization:
    // Assigning a specific value to the variable.
    
    // Example:
    
    // Definition (no initialization):
    cout << "Global variable (definition, no initialization): " << globalVar << endl; // Output the value of globalVar, which contains garbage value due to lack of initialization
    cout << "Static variable (definition, no initialization): " << staticVar << endl; // Output the value of staticVar, which contains garbage value due to lack of initialization
    cout << "Local variable (definition, no initialization): " << localVar << endl; // Output the value of localVar, which contains garbage value due to lack of initialization
    
    // Initialization:
    globalVar = 10; // Initialize the global variable globalVar with value 10
    staticVar = 20; // Initialize the static variable staticVar with value 20
    localVar = 30; // Initialize the local variable localVar with value 30
    
    cout << "Global variable (initialized): " << globalVar << endl; // Output the initialized value of globalVar
    cout << "Static variable (initialized): " << staticVar << endl; // Output the initialized value of staticVar
    cout << "Local variable (initialized): " << localVar << endl; // Output the initialized value of localVar

    int x = 5; // Declaration and initialization of a local variable named x with value 5

    cout << "Accessed Global Variable x using scope resolving technique: "<< ::x << endl; // Output the value of the global variable x using scope resolution operator (::)
    cout << "Accessed Local Variable x inside scope: "<< x << endl; // Output the value of the local variable x

    return 0; // Return 0 to indicate successful completion
}
