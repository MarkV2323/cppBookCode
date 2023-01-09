#include <iostream>
#include "header/programOne.hpp"

/* Could also do using std::cout for example */
using namespace std;

/* Print list of avaible sub programs to the user */
void printSubPrograms() {
    cout << "1 - Intro to Basics (Input Gathering, Type Info, Arrays, Strings)" << endl;
    cout << "0 - Exit " << endl;
    return;
}

/* Handle user input from the user */
int handleUserInput() {
    string uInp = "";
    cin >> uInp;
    // must be postive numeric
    bool check = !uInp.empty() && uInp.find_first_not_of("0123456789") == std::string::npos;
    if (!check) {
        cout << "Non numeric characters (or negative numerics) not accepted." << endl;
        return -1;
    }
    int option = std::stoi(uInp);
    check = 0 <= option && 1 >= option;
    if (!check) {
        cout << "Non valid option selected." << endl;
        return -1;
    }
    return option;
}

/* Entry point of program */
int main(int argc, char* argv[]) {
    cout << "Welcome to the main program for Intro to C++" << endl;
    cout << "Each listed option contains a subprogram you can run, please choose one" << endl;
    printSubPrograms();
    
    // user input vars
    bool validChoice = false;
    int selectedProgram = -1;

    // Poll until valid choice is given
    while (!validChoice) {
        selectedProgram = handleUserInput();
        if (selectedProgram != -1) {
            validChoice = true;
        }
    }

    /* printf allows for formatted output, some quick tips: (https://cplusplus.com/reference/cstdio/printf/)
    General format: %[flags][width][.precision][length]specifier
    d or i | signed decimal integer
    s | string
    c | character 
    */
    switch (selectedProgram) {
    case 1:
        printf("Launching program %d...\n", selectedProgram);
        programOneEntry();
        break;
    default:
        break;
    }

    printf("Exiting program...\n");
    return 0;
}