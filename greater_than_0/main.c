#include <stdio.h>
#include <stdlib.h>

int maximum(int num1, int num2);

int main(void)
{
    int num1, num2, max;
    printf("Enter Number 1: ");
    scanf("%d", &num1);

    printf("Enter Number 2; ");
    scanf("%d", &num2);

    max = maximum(num1, num2);
    printf("Total: %d", max);
    return 0;
}

int maximum(int num1, int num2)
{
    if((num1 && num2) > 0)
    {
        if(num1 < num2)
        {
            return num1;
            printf("Program Success");
        }
        else
        {
            return num2;
            printf("Program Success");
        }
    }
    else
    {
        printf("One or both numbers were greater than 0");
    }
}
