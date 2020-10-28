/** Multiplying 2 Floats **/

/** Header Files **/
#include <stdio.h>
#include <stdlib.h>

int main()

{
    //Specify type of data that is to be assigned to the variables
    double num1, num2, product;
    printf("Enter numbers: ");

    //Request inputs from user and assign inputted values to variables
    scanf("%lf %lf", &num1, &num2);

    //Multiply user inputs and store in variable
    product = num1 * num2;

    //Print value at product variable to 1 decimal place
    printf("Total: %.1lf", product);
    //Exit code 0 states that program will run successfully
    return 0;
}
