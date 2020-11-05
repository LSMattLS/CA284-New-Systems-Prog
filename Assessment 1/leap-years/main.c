#include <stdio.h>
#include <stdlib.h>

// Call Function before Main
int leap_years(int, int);

// Main
int main(int argc, char * argv[])
{
    int year1 = atoi(argv[1]), year2 = atoi(argv[2]); // Convert command line arg to integers
    leap_years(year1, year2); // Call Function
    return 0;
}

// Function to get Leap Years
int leap_years(int year1, int year2)
{
    int year = year1;
    while (year <= year2)
    {
        if (((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)))
        {
            printf("%d\n", year);
        }
        year++;
    }
    return 0;
}
