#include <stdio.h>
#include <stdlib.h>

// argc = Number of command line arguments
// argv = array containing all arguments
int main(int argc, char * argv[])
{
    #define max 5
    int array[5]; // Create an empty array

    // Loop through argument array and add int(elements) to new array
    for (int index = 1; index <= max; index++)
    {
        array[index] = atoi(argv[index]);
    }

    // Loop through new array and print items in reverse order
    // i.e start at end and work towards start of array
    for (int counter = max; counter > 0; counter--)
    {
        printf("%d\n",array[counter]);
    }
    return 0;
}

/** Alternative Method **/

/*
int main(int argc, char * argv[])
{
    for (int index = 5; index > 0; index--)
    {
        printf("%d\n", atoi(argv[index]));
    }
    return 0;
}
*/
