#include "header/programOne.hpp"

/* Example: get input from the user */
void gatherUserInput() {
    // local varible (only access from gatherUserInput)
    string userInput = "";
    /* can use cin for raw (can't get entire line), getLine for refined gathering (of entire line) */
    cout << "Please enter some string" << endl;
    cin >> userInput;
    cout << "What you entered: " << userInput << endl;
    // flush cin (reccomended to do if using cin)
    cin.ignore (100,'\n');
    // clear input
    userInput = "";
    cout << "Please enter some string" << endl;
    getline(cin, userInput);
    cout << "What you entered: " << userInput << endl;
    // clear input
    userInput = "";
    return;
}

/* Example: print out primitive type information */
void printPrimTypeInfo() {
    cout << "=======================================================" << endl;
    cout << "POSSIBLE PRIMITIVES AND CORRESPONDING SIZE INFORMATION" << endl;
    cout << "Results may vary upon compiler, hardware and OS" << endl;
    cout << "1 BYTE = 8 BITs ie char = 1 BYTE = 8 BITs " << endl;
    cout << "=======================================================" << endl;
    cout << "Size of bool               : " << sizeof(bool) << " BYTES" << endl;
    cout << "Size of char               : " << sizeof(char) << " BYTES" << endl;
    cout << "Size of short              : " << sizeof(short) << " BYTES" << endl;
    cout << "Size of int                : " << sizeof(int) << " BYTES" << endl;
    cout << "Size of long               : " << sizeof(long) << " BYTES" << endl;
    cout << "Size of float              : " << sizeof(float) << " BYTES" << endl;
    cout << "Size of double             : " << sizeof(double) << " BYTES" << endl;
    cout << "Size of unsigned short     : " << sizeof(unsigned short) << " BYTES" << endl;
    cout << "Size of unsigned int       : " << sizeof(unsigned int) << " BYTES" << endl;
    cout << "Size of long long          : " << sizeof(long long) << " BYTES" << endl;
    cout << "Size of unsigned long      : " << sizeof(unsigned long) << " BYTES" << endl;
    cout << "Size of unsigned long long : " << sizeof(unsigned long long) << " BYTES" << endl;
    cout << "=======================================================" << endl;

    return;
}

/* Example: showcase differences between C-Strings (char array) & strings */
string cStringExample() {
    return "";
}

/* Entry point of program one */
void programOneEntry() {
    // call user input example function
    gatherUserInput();
    cout << endl;
    printPrimTypeInfo();
    cout << endl;
    return;
}