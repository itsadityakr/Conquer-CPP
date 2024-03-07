#include <iostream>
using namespace std;
// Global variable declaration
int globalVar; // Declaration of a global variable named globalVar

// Static variable declaration
static int staticVar; // Declaration of a static variable named staticVar
int x = 10;

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
    cout << "Global variable (definition, no initialization): " << globalVar << std::endl; // Output the value of globalVar, which contains garbage value due to lack of initialization
    cout << "Static variable (definition, no initialization): " << staticVar << std::endl; // Output the value of staticVar, which contains garbage value due to lack of initialization
    cout << "Local variable (definition, no initialization): " << localVar << std::endl; // Output the value of localVar, which contains garbage value due to lack of initialization
    
    // Initialization:
    globalVar = 10; // Initialize the global variable globalVar with value 10
    staticVar = 20; // Initialize the static variable staticVar with value 20
    localVar = 30; // Initialize the local variable localVar with value 30
    
    cout << "Global variable (initialized): " << globalVar << std::endl; // Output the initialized value of globalVar
    cout << "Static variable (initialized): " << staticVar << std::endl; // Output the initialized value of staticVar
    cout << "Local variable (initialized): " << localVar << std::endl; // Output the initialized value of localVar

    int x = 5;

    cout << "Accessed Global Variable x using scope resolving technique: "<< ::x;
    cout << "Accessed Local Variable x inside scope: "<< x;

    return 0;
}
