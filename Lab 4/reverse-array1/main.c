#include <stdio.h>
#include <stdlib.h>

// argc = Number of command line arguments
// argv = array containing all arguments
int main(int argc, char * argv[])
{
    #define max 5
    int reversed[5]; // Create an empty array

    // Loop through cmd line args and print values
    for (int index = 1; index <= max; index++)
    {
        int *val = &argv[index]; // Use pointers to print value @ memeory address of current index
        printf("%s\n", *val);
    }

    // Loop through cmd line backwards to add values to reversed array
    for (int counter = max - 1; counter >= 1; counter--)
    {
        int *value = &argv[counter]; // Use pointers again to add value @ current memory address to new array
        reversed[counter] = *value;
        printf("%s\n", *value);
    }
    return 0;
}

