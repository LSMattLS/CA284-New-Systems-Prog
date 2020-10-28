/** Compute Quotient & Remainder **/

/** Header Files **/
#include <stdio.h>
#include <stdlib.h>

int main()

{
    //Specify type and name of variables that are to be used
    int num1, num2, division, remainder;
    printf("Enter Numbers: ");

    //Request exactly 2 integers from User and assign to specified variable
    scanf("%d %d", &num1, &num2);

    //Divide number 1 by number 2 and assign resulting value to variable
    division = num1 / num2;

    //Number 1 modulo number 2 to identify remainder and assign to variable
    remainder = num1 % num2;

    //Print Answer
    printf("Answer: %d\n", division);
    //Print Remainder
    printf("Remainder: %d", remainder);
    //Exit code 0 states that program ran without error
    return 0;

}
