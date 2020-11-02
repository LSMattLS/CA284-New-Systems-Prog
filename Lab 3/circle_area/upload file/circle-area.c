#include <stdio.h>
#include <stdlib.h>

float circle(float radius); /* Call Function */

int main(int argc, char * argv[]) /* Store command line arguments in list */
{
    float radius = atoi(argv[1]); /* Create radius variable containing float and assign int(argv[1]) */
    float total_area = circle(radius); /* Create Area variable containing float and assign output of function call */
    printf("%.2f\n", total_area); /* Print float value stored at area variable to 2 decimal points */
    return 0;
}

/** Function to get area of circle **/
float circle(float radius)
{
    if (radius == 0) /* If radius of circle == 0 then Area is automatically 0 */
    {
        return 0;
    }
    else
    {
        float pi = 3.1415; /* Else create pi variable and assign floating value to it */
        float area = (pi) * (radius * radius); /* Formula: (pi)(radius)**2 */
        return area; /* Return Area */
    }
}

