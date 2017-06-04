# include <stdio.h>
# include <stdlib.h>
# include "string_manipulation.h"


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


void my_strncpy (char targetString[], char givenString[], int numberOfCharacters) {

        int iterator = 0;

        if (numberOfCharacters == 0) {

                return;

        }

        while (iterator < numberOfCharacters) {

                targetString[iterator] = givenString[iterator];

                if (givenString[iterator] == '\0') {

                        break;

                }

                iterator++;

        }

        targetString[iterator] = '\0';

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

                }
                else {

                        if ( (int)(firstString[iterator]) < (int)(secondString[iterator]) ) {

                                return -1;

                        }

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


char *my_strstr (char targetString[], char givenString[]) {

        int targetStringIterator = 0;
        int givenStringIterator = 0;
        int position = my_strlen(targetString);

        if (my_strlen(targetString) < my_strlen(givenString)) {

                return targetString + my_strlen(targetString);

        }

        while (targetString[targetStringIterator] != '\0') {

                if (targetString[targetStringIterator] == givenString[0]) {

                        position = targetStringIterator;

                        while (givenString[givenStringIterator] != '\0') {

                                if (targetString[targetStringIterator] != givenString[givenStringIterator]) {

                                        givenStringIterator = 0;
                                        targetStringIterator = position;
                                        position = my_strlen(targetString);
                                        break;

                                }

                                givenStringIterator++;
                                targetStringIterator++;

                        }

                }

                targetStringIterator++;

        }

        return targetString + position;

}
