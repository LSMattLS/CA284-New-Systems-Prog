#include <stdio.h>
#include <stdlib.h>

float area(float radius, float height); /* Call Function */

int main(int argc, char * argv[]) /* Store command line arguments in array */
{
    float radius, height, areac; /* Create 3 variables and assign floating value to them */
    radius = atoi(argv[1]); /* Convert string radius value to int radius value */
    height = atoi(argv[2]); /* Covert string height value to int height value */
    areac = area(radius, height); /* Call function and store output in variable #3 */

    printf("%.2f\n", areac); /* Print float value at areac variable to 2 decimal places */
    return 0;
}

/** Function to get area of cylinder **/
float area(float radius, float height)
{
    float total_area; /* Create variable and assign float variable to it */
    total_area = (2 *(3.1415)* (radius * radius)) + (height)*(2*(3.1415)*(radius)); /* Formula: 2(pi)(radius)**2 + (height)(2)(pi)(radius) */
    return total_area; /* Return result */
}
