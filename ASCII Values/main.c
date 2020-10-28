/** ASCII Value of Letters **/

/** Header Files **/
#include <stdlib.h>
#include <stdio.h>

int main()

{
    //Specify type and name of Variable
    char letter;
    printf("Enter Letter: ");

    //Request letter of User and assign to letter variable mentioned above
    scanf("%c", &letter);

    //Print number version of letter that is assigned the letter variable
    printf("The ASCII value of %c is %d", letter, letter);
    //Exit Status 0 suggests that program ran successfully error free
    return 0;
}
