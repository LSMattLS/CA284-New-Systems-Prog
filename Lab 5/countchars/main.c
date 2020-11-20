#include <stdio.h>
#include <stdlib.h>

void index_method(char *word);

int main(int argc, char *argv[])
{
    index_method(argv[1]);
    return 0;
}

void index_method(char *word)
{
    int length = strlen(*word);

    for (int index=0; index <= length; index++)
    {
        printf("%c\n", word[index]);
    }
}
