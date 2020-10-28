/** Taking/Scanning Data from Command Line **/

/** Header Files **/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Before we read input from user, we must create a variable where we can store the inputs
    //We also need to specify the type of data being assigned to the variable
    int age; //Here we are assigning an integer to age (variable)


    printf("Enter your age: ");  // We then print this statement to ask the user for their inputs

    //We then need to retrieve input from the user
    //We must specify the type of input (i.e is it an integer/float/string etc) and we must assign that to the age variable
    //NOTE: When referencing the age variable, we must use '&' variable
    scanf("%d", &age);

    //We then print the statement below along with the integer(%d) at age(variable)
    printf("Your age is %d", age);

    return 0; //Exit status 0 means the program was executed successfully
}
