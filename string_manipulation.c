/**
*		@file 	string_manipulation.c
*		@brief 	Reimplementation of basic C string manipulation functions
*
*		@author Dana Andrei - Iulian
*		
*		@date 	5/19/2017
*/

# include <stdio.h>
# include <stdlib.h>
# include "string_manipulation.h"

/**
*		This function will count the number of letters of a given string.
*		We use a counter to store the number of letters in the string, the 
*		counter being incremented as we browse the string.
*
*		@author Dana Andrei - Iulian
*		
*		@param givenString[]	The string that will be used
*
*		@date 5/19/2017
*/
int my_strlen (char givenString[]) {

        int letterCounter = 0;

        while (givenString[letterCounter] != '\0') {

                letterCounter++;

        }

        return letterCounter;

}

/**
*		This function will be used to copy a string into another string.
*		The copy process will stop after all the letters from the string
*		we copy are used. At the end, the function checks where the target
*		string ends and places null at the end of it.
*
*		@author Dana Andrei - Iulian
*		
*		@param targetString[]	The destination string
*		@param givenString[]	The string we want to copy
*
*		@date 5/19/2017
*/
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

/**
*		This function will be used to copy a certain number of characters
*		from one string to another. The process will stop either when that
*		number of characters is copied or when the string we want to copy
*		from is terminated. After the copy process the target string is
*		terminated by placing null at the end of it.
*
*		@author Dana Andrei - Iulian
*
*		@param targetString[]	The destination string
*		@param givenString[]	The string we copy from
*		@param numberOfCharacters	Number of characters to copy
*
*		@date 5/20/2017
*/
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

/**
*		This function will be used to concatenate two strings. It places
*		one by one the characters from the string we want to concatenate
*		at the end of the destination string, until there are no more
*		characters left in the given string. After that process the function
*		checks if the destination is string is null-terminated and if not
*		it places the null value manually.
*
*		@author Dana Andrei - Iulian
*
*		@param	targetString[]	The destination string
*		@param givenString[]	The string we want to concatenate
*
*		@date 5/20/2017
*/
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

/**
*		This function will lexicographically compare two strings and return
*		certain values depending on the comparison result (1 if the first
*		string is lexicographically greater than the second one, 0 if the are
*		equal and -1 if it is smaller). The two strings are compared
*		character by character until they are different.
*
*		@author Dana Andrei - Iulian
*
*		@param firstString[]	The first string
*		@param secondString[]	The second string
*
*		@date 5/21/2017
*/
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

/**
*		This function will allow the user to enter a string containing
*		not only normal characters, but spaces aswell. The string is
*		saved after the ENTER character is met. The ENTER will not be
*		string along with the other characters. It reads and saves
*		character by character into a given string, exiting the
*		function when user presses the ENTER key.
*
*		@author Dana Andrei - Iulian
*
*		@param	givenString[]	The string in which the chars are saved
*
*		@date 5/22/2017
*/
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

/**
*		This function searches for a certain character in a given
*		string and return it's first apparition. An iterator is
*		incremented as the function searches for the character
*		and the process stops when the function finds it or when
*		the null character is met. After this process wither the
*		adress of that character is returned or the null value in
*		case it is not found.
*
*		@author Dana Andrei - Iulian
*
*		@param givenString[]	The string in which we search
*		@param inputCharacter	The character we searh
*
*		@date 5/22/2017
*/
char *my_strchr (char givenString[], char inputCharacter) {

        int iterator = 0;

        while (givenString[iterator] != '\0') {

                if (givenString[iterator] == inputCharacter) {

                        return givenString + iterator;

                }

                iterator++;

        }

}

/**
*		This function searches for a certain string in another
*		string and return it's first apparition. An iterator 
*		is incremented as the search process goes on and when
*		the first character from the searched string matches
*		the current character from the string we search in
*		the second string is browsed aswell, checking if
* 		it appears in the first string. After the searching
*		process stops, either the adress of the searched string
*		is returned, or the null value if it is not found.
*
*		@author Dana Andrei - Iulian
*
*		@param targetString[]	The string in which we search
*		@param givenString[]	The string we searh
*
*		@date 5/23/2017
*/
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
