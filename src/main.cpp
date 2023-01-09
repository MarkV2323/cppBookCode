#include <iostream>

using namespace std;

/* Print list of avaible sub programs to the user */
void printSubPrograms() {
    cout << "1 - Intro to Basics (Input Gathering, Type Info, Arrays, Strings)" << endl;
    cout << "0 - Exit " << endl;
    return;
}

/* Entry point of program */
int main() {
    cout << "Welcome to the main program for Intro to C++" << endl;
    cout << "Each listed option contains a subprogram you can run, please choose one" << endl;
    printSubPrograms();
    
    return 0;
}