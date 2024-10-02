/* ****************************************************************
 * @author: Carlo B. Ruiz
 * @app name: Hello World!
 * @app desc: My First C++ Program
 * @history:
 *  - <10/11/23> | Question 3
 *      -- Write a program that displays “Hello” in one line, and “World” in another line using exactly one (1) for the “Hello” and exactly five (5) COUT statements for the “World”.
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

//////////////////////////////////////////////////////////////////
//                               NOTE
// This is your program entry point. Your main logic is placed
// inside this function. You may add your functions before this
// "main()", or after this "main()" provided you added reference
// before this "main()" function.
//////////////////////////////////////////////////////////////////

int main() {
    // ************************** TO DO **************************
    // Place your code logic after this comment line
    // ***********************************************************

    cout << "Hello\n";
    cout << "World\n";
    cout << "World\n";
    cout << "World\n";
    cout << "World\n";
    cout << "World\n";

    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    _pause();
    return EXIT_SUCCESS;
}
