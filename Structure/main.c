/** Structure Indications **/

/** Header Files (.h) **/
// Very similar to import in Python
#include <stdio.h> //Preprocessor Directive (Program won't work without it)
#include <stdlib.h> //Preprocessor Directive (Program won't work without it)

/** Syntax for Header Files **/
// #include <header.h> - Looks for file in one or more Standard system directories
// #include "header.h" - User Defined and is in current directory (i.e Function I made)

int main()  //Must have this line or else program won't work

{  // Parenthesis indicate the start and end of code block
    printf("Hello World!!"); //Print Statement
    //All C program lines must end with colon which indicates the end of line
    //If colon isn't entered then it'll result in an infinite loop

    return 0; //Exit code 0 means that the test ran successfully
}
