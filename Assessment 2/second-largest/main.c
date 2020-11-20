#include <stdio.h>
#include <stdlib.h>
void sort(int *numbers[], int size);

int main(int argc, char *argv[])
{
    sort(argv, argc);
}


void sort(int *numbers[], int size)
{
    int index1, index2, minimum;
    for (int index1 = 0; index1 < size - 1; index1++)
    {
        minimum = index1;
        for (index2 = index1 + 1; index2 < size; index2++)
        {
            if (numbers[index2] < numbers[index2])
            {
                minimum = index2;
            }
        }

        swap(&numbers[minimum], &numbers[index1]);
    }
}

void swap(int *val1, int *val2)
{
    int tmp = *val1;
    *val1 = *val2;
    *val2 = tmp;
}

/**
void secondLargest(int *numbers, int *index)
{

}
**/
