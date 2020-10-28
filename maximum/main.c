#include <stdio.h>
#include <stdlib.h>

/* Call Function before Main */
int maximum(int number1, int number2);

int main(void)
{
    int number_1, number_2, maxi; /* Assign 3 variables with integer data types */

    printf("Enter Number 1: ");
    scanf("%d", &number_1); /* Receive Number 1 from User and store in 1st variable */

    printf("Enter Number 2: ");
    scanf("%d", &number_2); /* Recieve Number 2 from User and store in 2nd variable */

    maxi = maximum(number_1, number_2); /* Call Function on 1st and 2nd Variable */
    printf("Higher Value: %d", maxi); /* Print Maximum */
    return 0;
}

int maximum(int number1, int number2) /* Define Function */
{
    if (number1 > number2)
    {
        return number1;
    }
    else
    {
        return number2;
    }
}
