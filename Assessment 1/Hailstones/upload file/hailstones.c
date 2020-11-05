#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Call Functions before Main
int print_sequence(int);
int even(int);

//Main
int main(int argc, char * argv[]) // Receive command-line arguments
{
    int num = atoi(argv[1]); // Create variable and assign int(argument value) to it
    print_sequence(num); // Print entire sequence excl. 1st number
    return 0;
}

// Function to print Hailstone sequence
int print_sequence(int value)
{
    int current_val = value;

    while (current_val != 1) // As long as current value != 1
    {
        if (even(current_val) == true) // Check if current value is even or odd
        {
            current_val = (current_val / 2); // Update
        }
        else
        {
            current_val = (current_val * 3) + 1; // Update
        }

        printf("%d\n", current_val); //Finally print current value
    }
    return 0;
}
// Function to check if number is even or odd
int even(int number)
{
    if (number % 2 == 0)
    {
        return true; // If even, return true
    }
    else
    {
        return false; // If odd, return false
    }
    return 0;
}
