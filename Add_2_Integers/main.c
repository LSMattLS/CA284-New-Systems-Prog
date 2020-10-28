/**Sum of 2 Integers **/

//Header Files
#include <stdio.h>
#include <stdlib.h>

int main()

{
    //Create 3 variables that will contain Integers
    int number1, number2, sum;

    //Ask User for Inputs
    printf("Enter Numbers: ");

    //Request exactly 2 Integers from User and store in respective Variables
    //NOTE: Use '&' symbol when trying to assign values to variables
    scanf("%d %d", &number1, &number2);

    //Add Integers at variables and assign that value to the sum variable
    sum = number1 + number2;

    //Output the Integer at Sum value
    printf("Total: %d", sum);

    //Exit code 0 means that the program ran successfully
    return 0;
}
