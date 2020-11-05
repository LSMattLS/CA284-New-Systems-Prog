#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    int weekday = atoi(argv[1]);
    char *days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    printf("%s\n", days[weekday - 1]);
    return 0;
}
