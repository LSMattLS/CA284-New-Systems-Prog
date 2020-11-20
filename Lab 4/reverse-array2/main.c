#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    int reversed[argc]; // Create empty array with size of arguments

    for (int index = 1; index < argc; index++) // Loop through arguments and print values
    {
        int *val = &argv[index]; // Use pointers to print value @ memory address of current index
        printf("%s\n", *val);
    }

    // Loop through cmd arguments and print elements in reverse
    // I.e start at end and work towards start
    for (int counter = argc - 1; counter >= 1; counter--)
    {
        int *value = &argv[counter]; // Use pointers again to print values @ memory address of current index
        reversed[counter] = *value; // Add to reversed array
        printf("%s\n", *value);
    }
    return 0;
}
