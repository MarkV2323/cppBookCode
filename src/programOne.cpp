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
    return;
}