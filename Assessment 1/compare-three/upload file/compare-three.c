#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Calling Function before Main
int largest(int num1, int num2, int num3);

//Main
int main(int argc, char * argv[])
{
    int num1 = atoi(argv[1]), num2 = atoi(argv[2]), num3 = atoi(argv[3]); // Create 3 variables and assign int of argument values

    // Check for duplicate numbers
    if ((duplicate(num1, num2) == true) || (duplicate(num2, num3) == true) || (duplicate(num1, num3) == true))
    {
        printf("error: two numbers entered are the same\n");
        return 0;
    }
    else
    {
        printf("%d is the largest number.\n", largest(num1, num2, num3));
        return 0;
    }
}

// Function to check for duplicates
int duplicate(int num1, int num2)
{
    if (num1 == num2)
    {
        return true;
    }
    else
    {
        return false;
    }
    return 0;
}

// Function to return Largest of 3 Numbers
int largest(int num1, int num2, int num3)
{
    int largest; // Create variable to hold largest number

    if (num1 > num2) // Check if 1st num is bigger or smaller than 2nd num
    {
        largest = num1; // If it is bigger, then largest value is num1
    }
    else
    {
        largest = num2; // largest value is num2
    }

    if (largest < num3) // Now check if current largest value is bigger than num3
    {
        largest = num3; // if it is, then assign largest to num3
    }
    else
    {
        return largest; // Else just return value at largest variable
    }

    return largest;
    return 0;
}
