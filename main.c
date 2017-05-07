# include <stdio.h>
# include <stdlib.h>

# define DIM 1010

int my_strlen (char givenString[]) {

    int letterCounter = 0;

    while (givenString[letterCounter] != '\0') {

        letterCounter++;

    }

    return letterCounter;

}

void my_strcpy (char targetString[], char givenString[]) {

    int iterator = 0;

    while (1) {

        targetString[iterator] = givenString[iterator];

        if (givenString[iterator] == '\0') {

            break;

        }

        iterator++;

    }

    int letterCounter = 0;

    while (givenString[letterCounter] != '\0') {

        letterCounter++;

    }

    targetString[letterCounter] = '\0';

}


void my_strcat (char targetString[], char givenString[]) {

    int iterator = 0;;
    int givenStringLegth = 0;
    int targetStringLegth = 0;

    while (targetString[iterator++] != '\0') {

        targetStringLegth++;

    }

    for (iterator = 0; givenString[iterator] != '\0'; iterator++) {

        targetString[targetStringLegth + iterator] = givenString[iterator];

    }

    if (targetString[targetStringLegth + iterator] != '\0') {

        targetString[targetStringLegth + iterator] = '\0';

    }


}

int my_strcmp (char firstString[], char secondString[]) {

    int iterator = 0;

    while (1) {

        if ( (int)(firstString[iterator]) > (int)(secondString[iterator]) ) {

            return 1;

        } else if ( (int)(firstString[iterator]) < (int)(secondString[iterator]) ) {

                    return -1;

        }

        if (firstString[iterator] == '\0' || secondString[iterator] == '\0') {

            break;

        }

        iterator++;

    }

    return 0;

}

void my_gets (char givenString[]) {

    char inputCharacter;
    int iterator = 0;

    while (inputCharacter != EOF) {

        inputCharacter = getc(stdin);

        if (inputCharacter == '\n') {

            givenString[iterator] = '\0';

            return;
        }

        givenString[iterator] = inputCharacter;

        iterator++;

    }

    givenString[iterator - 1] = '\0';

    iterator = 0;

}


char *my_strchr (char givenString[], char inputCharacter) {

    int iterator = 0;

    while (givenString[iterator] != '\0') {

        if (givenString[iterator] == inputCharacter) {

            return givenString + iterator;

        }

        iterator++;

    }

}

char firstString[DIM];
char secondString[DIM];
char ch;

int main()
{


    ///scanf("%s", firstString);
    my_gets(firstString);
    scanf("%c", &ch);

    printf("%s", my_strchr(firstString, ch));

    return 0;
}
