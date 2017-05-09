# include <stdio.h>
# include <stdlib.h>
# include "string_manipulation.h"

# define DIM 1010

char firstString[DIM];
char secondString[DIM];
char ch;

int main()
{


    my_gets(firstString);
    my_gets(secondString);

    printf("%s", my_strstr(firstString, secondString));

    return 0;
}
