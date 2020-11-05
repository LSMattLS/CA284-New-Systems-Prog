#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Call Function before Main
int triangular(int);

// Main
int main(int argc, char * argv[])
{
    triangular(atoi(argv[1])); // Check if int(argument) is triangular or not
    return 0;
}

//Function to check if number is Triangular or not
int triangular(int input)
{
    // Calculations & Evaluation
    double test_num = input * 2;
    int value, formula;

    value = sqrt(test_num);
    formula = ((value * (value + 1)) / 2);

    if (formula == input)
    {
        printf("%d is a triangular number.\n", input);
    }
    else
    {
        printf("%d is not a triangular number.\n", input);
    }
    return 0;
}

