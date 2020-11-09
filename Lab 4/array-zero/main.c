#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    #define Max 10 // Used to define a constant
    // These cannot be modified/updated and are fixed for entire code

    int array[10]; // Initialise an array

    // Loop through array and add 0's to it
    for (int index=0; index < Max; index++)
    {
        array[index] = 0;
    }

    //Loop through array and print value at each array memory address
    for (int index=0; index < Max; index++)
    {
        printf("%d\n", *array);
    }
    return 0;
}

/* First time loop goes around, index is at 0 so therefore program is at memory address of value @ index 0.
   We use '*' (pointer) to print value at that memory address
*/

/*
   Second time loop goes around, index is at 1 so therfore program is at memory address of value @ index 1.
   And so on ......
   Everytime we go to a memory address, we want to print out the value at the memory address
*/
