#include <stdio.h>
#include <stdlib.h>

void duplicate_method(char *array[], int size);
void in_place_index(char *aray[], int length);

int main(int argc, char *argv[])
{
    // Reversal by creating new array
    //duplicate_method(argv, argc);
    in_place_index(argv, argc);

}


void duplicate_method(char *array[], int size)
{
    int reversed[size];

    // Loop through array and print out values
    for (int index = 1; index <= size - 1; index++)
    {
        int nmbr = atoi(array[index]);
        int *val = &nmbr; // Use pointers to print out vaue @ current indexes memory address
        printf("%d\n", *val);
    }

    for (int a_index = size - 1, r_index = 0; a_index >= 1, r_index < size - 1; a_index--, r_index++)
    {
        int nbr = atoi(array[a_index]);
        int *value = &nbr;
        reversed[r_index] = *value;
    }

    for (int point = 0; point < size - 1; point++)
    {
        int *item = &reversed[point];
        printf("%d\n", *item);
    }
    return 0;
}

void in_place_index(char *aray[], int length)
{
    int tmp;

    for (int top = 1, end = length - 1; top < length / 2; top++, end--)
    {
        tmp = aray[top];
        aray[top] = aray[end];
        aray[end] = tmp;
    }

    for (int idx = 1; idx < length; idx++)
    {
        printf("%s\n", aray[idx]);
    }
    return 0;
}


