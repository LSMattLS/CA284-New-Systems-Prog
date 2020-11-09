#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    int array[argc]; // Create empty an empty array of size argc

    for (int index = 1; index < argc; index++) // Loop through elements in cmd line and add to new array
    {
        int *val = &argv[index]; // Retrieve value present at memory address of index
        array[index] = *val; // Add to new array
    }

    for (int counter = argc - 1e; counter >= 1; counter--) // Loop through new array backwards
    {
        int *value = &array[counter]; // Print value present at memory address of index
        printf("%s\n", *value);
    }
    return 0;

}
