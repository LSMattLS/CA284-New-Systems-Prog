#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    int array[argc]; // Create empty array with size of arguments

    for (int index = 1; index < argc; index++) // Loop through arguments and add int(element) to empty array
    {
        array[index] = atoi(argv[index]);
    }

    // Loop through new array and print elements in reverse
    // I.e start at end and work towards start
    for (int counter = argc - 1; counter > 0; counter--)
    {
        printf("%d\n", array[counter]);
    }
    return 0;
}
