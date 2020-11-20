#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int checker(char str[30]);
void converter(char string[30]);

int main()
{
    char string[30];
    printf("Enter a string of upper and lower case letters\n");
    scanf("%s", string);

    if (checker(string) == 1)
    {
        printf("Invalid character entered.\n");
        return 0;
    }
    converter(string);
    printf("\n");
    return 0;
}

// Function to check for any integers
int checker(char str[30])
{
    for (int index = 0; index <= strlen(str) - 1; index++)
    {
        int value = str[index];
        int val = isalpha(str[index]);

        if (val == 0) // isalpha function returns 0 if value is an integer
        {
            return 1; // Break out of loop
        }
    }
    return 0;
}

// Function to display contents of converted array
void display(char array[], int size)
{
    for (int pos = 0; pos <= size - 1; pos++)
    {
        printf("%c", array[pos]);
    }
}

// Function to convert string
void converter(char string[30])
{
    char output[strlen(string)]; // Empty array

    // Check for any integers
    if (checker(string) != 1)
    {
        for (int index = 0; index <= strlen(string); index++)
        {
            int ascii = string[index];

            if (ascii >= 'a' && ascii <= 'z') // Check if ascii value is a lowercase letter
            {
                string[index] -= 32; // If it is, then get the uppercase value
                output[index] = string[index]; // append to new array
            }
            else if (ascii >= 'A' && ascii <= 'Z') // Check if ascii value is an uppercase letter
            {
                string[index] += 32; // If it is, then get lowercase value
                output[index] = string[index]; // append to new array
            }
        }
    }

    display(output, strlen(string)); // Print contents of new array
}
