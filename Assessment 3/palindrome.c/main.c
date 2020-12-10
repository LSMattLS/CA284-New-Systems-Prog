#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/** Functions to be called in Main() **/
int checker(char *string);
int remove_space(char *string);
void remove_char(char *string);
void reverse(char string[]);

int main()
{
    //Dynamic Memory location using calloc()
    // Allocates a set chunk of memory
    // Allocates space in memory for 100 elements each with the size of the char
    char* array = calloc(100, sizeof(char));

    //Request input from user and store in new array
    printf("Please enter a string:  \n");
    scanf("%m[^\n]", &array);

    int result = checker(array); // Check if any numbers present

    if(result == 1) // If number is encountered
    {
        printf("Invalid input: Numbers not permitted.\n"); // Error Code
        return 0; // Break
    }

    char new_string[100], duplicate[200];
    strcpy(duplicate,array); // Copy of original array

    *new_string = remove_space(array); // Remove space characters from array

    remove_char(array); // remove special characters
    strcpy(new_string, array); // Copy those changes into new string using strcpy(destination, source)


    // Converting to lower case
    int ind = 0;
    char ch;
    while (new_string[ind])
    {
        ch = tolower(new_string[ind]); // Changes to lowercase
        new_string[ind] = ch;
        ind++;
    }

    // Now new_string is an exact copy of array but with no spaces, no punc and all chars lowercased

    reverse(strcpy(array,new_string)); // Copy changes made in new_string back to original array and reverse it

    strcpy(duplicate,new_string); // Copy changes made to new_string array to duplicate array


    /** Now we have 2 arrays to compare with **/
    /**
        array = reversed, no space, no special char, lowercased
        duplicate = no space, no special char, lowercased
    **/

    // Compare 2 arrays
    if(strcmp(array, duplicate) == 0)
    {
        printf("This string is a palindrome.\n");
        return 0;
    }
    else
    {
        printf("This string is not a palindrome.\n");
        return 0;
    }

    return 0;
}







// Function: Checks for integers
int checker(char *string)
{
    int len = strlen(string); // length of string
    for(int i = 0; i < len; i++)
    {
        if(string[i] >= '0' && string[i] <= '9') // Check if current val is integer
        {
            return  1; // if it is, then break with exit code 1
        }
    }
    return 0;
}






// Function: Remove space characters
int remove_space(char *string)
{
    int index = 0, index2 = 0;
    char new_array[100];

    // Loop through strings as long as current val != null character
    while (string[index] != '\0')
    {
        if (string[index] != ' ')
        {
            new_array[index2] = string[index]; // Add non space char to new array
            index2++;
        }
        index++;
    }
    return *new_array;
}





// Function: Remove special characters
void remove_char(char *string)
{
    for (int i = 0, j; string[i] != '\0'; ++i)
    {
        while (!(string[i] >= 'a' && string[i] <= 'z') && !(string[i] >= 'A' && string[i] <= 'Z') && !(string[i] == '\0')) //ASCII
        {
            for (j = i; string[j] != '\0'; ++j)
            {
                string[j] = string[j + 1]; // Move up by one
            }
            string[j] = '\0'; // replace special char with NULL value
        }
    }
}





// Function: reverse string array in place
void reverse(char string[])
{
    int temp, alpha1 , alpha2;
    int len = strlen(string) - 1; //length of string

    for (alpha1 = 0, alpha2 = len; alpha1 < alpha2; alpha1++, alpha2--)
    {
        // Swapping
        temp = string[alpha1];
        string[alpha1] = string[alpha2];
        string[alpha2] = temp;
    }
}



/** References **/
// Dynamic Memory Allocation: https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/#:~:text=C%20calloc()%20method,a%20default%20value%20'0'
