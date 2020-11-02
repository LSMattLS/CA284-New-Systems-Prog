#include <stdio.h>
#include <stdlib.h>

float area(float radius, float height);

int main(int argc, char * argv[])
{
    float radius, height, areac;
    radius = atoi(argv[1]);
    height = atoi(argv[2]);
    areac = area(radius, height);

    printf("%.2f\n", areac);
    return 0;
}

float area(float radius, float height)
{
    float total_area;
    total_area = (2 *(3.1415)* (radius * radius)) + (height)*(2*(3.1415)*(radius));
    return total_area;
}
