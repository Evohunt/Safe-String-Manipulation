# include <stdio.h>
# include <stdlib.h>
# include "string_manipulation.h"

/// Function that determines the legth of a given string
int my_strlen (char givenString[]) {

    /// The letterCounter variable will store the total number of characters of the string
    /// It will have an initial value of 0
    int letterCounter = 0;

    /// We start to browse the entire string character by character until we get to the null character
    while (givenString[letterCounter] != '\0') {

        /// After every character we increment the value of letterCounter
        letterCounter++;

    }

    /// After the while loop is over, we return the value of letterCounter
    /// If string is null, the while loop will never happen so it will return the initial value
    /// of letterCounter, which is 0
    return letterCounter;

}


/// Function that will copy the content of a string into another string
void my_strcpy (char targetString[], char givenString[]) {

    /// Declaring the iterator we will use to browse the strings
    int iterator = 0;

    /// We do not need a stopping condition for now, so we will use 1 as a condition
    while (1) {

        /// Every step, we copy character by character from one string to another
        /// The target string's characters will be replaced
        targetString[iterator] = givenString[iterator];

        /// If the string we want to copy is ended (we met the null character), the while will stop looping
        if (givenString[iterator] == '\0') {

            break;

        }

        /// Incrementing the iterator after every step to avoid infinite cicling
        iterator++;

    }

    /// Declaring the letterCounter variable we will use to make sure the target string is null-terminated
    int letterCounter = 0;

    /// We start to count the number of characters of the string we copied
    while (givenString[letterCounter] != '\0') {

        letterCounter++;

    }

    /// After the while is over, we place the null character at the end of the target string to avoid buffer overflow
    targetString[letterCounter] = '\0';

}


/// Function that will copy a given number of characters from one string to another
void my_strncpy (char targetString[], char givenString[], int numberOfCharacters) {

    /// Iterator we will use to browse the strings character by character
    int iterator = 0;

    /// If the number of characters we want to copy is 0, then there is no reason to continue
    /// so we will exit the function
    if (numberOfCharacters == 0) {

        return;

    }

    /// While the iterator is smaller than the numbver of characters we want to copy
    /// instructions will be executed
    while (iterator < numberOfCharacters) {

        /// Every step we will copy character by character from one string to another
        targetString[iterator] = givenString[iterator];

        /// If the string we want to copy is over, the while will end earlier
        if (givenString[iterator] == '\0') {

            break;

        }

        iterator++;

    }

    /// After we exit the while, we make sure the target string is null-terminated, to avoid buffer overflow
    targetString[iterator] = '\0';

}


/// Function that will copy the content of a string at the end of another string
void my_strcat (char targetString[], char givenString[]) {

    int iterator = 0;
    /// Variable that will store the legth of the target string
    int targetStringLegth = 0;

    /// Browsing the target string character by character to count the number
    /// of characters it has
    while (targetString[iterator++] != '\0') {

        targetStringLegth++;

    }

    /// We start to copy the characters from one string to another,
    /// placing them at the end of the target string
    for (iterator = 0; givenString[iterator] != '\0'; iterator++) {

        targetString[targetStringLegth + iterator] = givenString[iterator];

    }

    /// Checking if the target string is null-terminated after the process is done
    /// to avoid buffer overflow
    if (targetString[targetStringLegth + iterator] != '\0') {

        targetString[targetStringLegth + iterator] = '\0';

    }


}


/// Function that determines which one of two given string is lexicographically bigger than the other.
/// The function return -1 if the first string is smaller than the second one, 1 if it is bigger than
/// the other one, or 0 if they are equal
int my_strcmp (char firstString[], char secondString[]) {

    /// Declaring the iterator we will be using to browse the strings
    int iterator = 0;

    /// We do not need an ending condition for while now, so we will use 1 as a condition to make it loop
    while (1) {

        /// We convert characters from the two string to int and compare those numbers to determine
        /// how they are compared to each other
        if ( (int)(firstString[iterator]) > (int)(secondString[iterator]) ) {

            /// If a character from the first string is lexicographically bigger than the one in the
            /// second string the function will return 1
            return 1;

        } else if ( (int)(firstString[iterator]) < (int)(secondString[iterator]) ) {

                    /// Else, if that character is smaller, the function will return -1
                    return -1;

        }

        /// After each step we check if any of the two string is ended (we meet the null character)
        /// and break out of the while when one of those conditions is met
        if (firstString[iterator] == '\0' || secondString[iterator] == '\0') {

            break;

        }

        iterator++;

    }

    /// If no value was returned during the while loop it means that at every step
    /// the two strings' characters were lexicographically equal, so the function return 0
    return 0;

}


/// Function that read an entire line of characters until new line character is met
void my_gets (char givenString[]) {

    /// Declaring a single char character variable in which we will store characters, one by one,
    /// entered by the user
    char inputCharacter;
    int iterator = 0;

    /// The while will loop until the current file is ended
    while (inputCharacter != EOF) {

        /// We the user starts to type the string, every character will be stored in the
        /// inputCharacter variable, one by one
        inputCharacter = getc(stdin);

        /// If the new line character is entered, the null character will be placed at the
        /// end of the string to avoid buffer overflow and the function will exit
        if (inputCharacter == '\n') {

            givenString[iterator] = '\0';

            return;
        }

        /// Inserting every character entered into the final string
        givenString[iterator] = inputCharacter;

        iterator++;

    }

    /// In case the string is not null-terminated, one will be placed at the end of it,
    /// over the new line character to avoid storing it into the final string
    givenString[iterator - 1] = '\0';

    iterator = 0;

}


/// Function that will return the first appereance of a character into a string
char *my_strchr (char givenString[], char inputCharacter) {

    /// The iterator we will use to browse the string
    int iterator = 0;

    /// We start the actual search of the character into the string
    /// The while will stop looping when the string is ended
    while (givenString[iterator] != '\0') {

        /// If the character is found, its adress will be returned
        if (givenString[iterator] == inputCharacter) {

            return givenString + iterator;

        }

        iterator++;

    }

}


/// Function that searches for a string into another string and returns its first appereace
char *my_strstr (char targetString[], char givenString[]) {

    /// Declaring the iterators we will use to browse the two strings
    int targetStringIterator = 0;
    int givenStringIterator = 0;
    /// In the position variable we will store the adress of the searched string in the other string
    /// and it will have an initial value equal to the length of the target string
    int position = my_strlen(targetString);

    /// Checking if the length of the searched string is bigger than the length of the target string
    /// If that is the case, we will return the last character of the target string, which is null
    if (my_strlen(targetString) < my_strlen(givenString)) {

        return targetString + my_strlen(targetString);

    }

    /// We start the search process, so the while will stop if the target string is ended
    while (targetString[targetStringIterator] != '\0') {

        /// Checking if the current character in the target string is equal to the first
        /// character of the other string
        if (targetString[targetStringIterator] == givenString[0]) {

            /// Storing the adress of that character in the position variable
            position = targetStringIterator;

            /// We start browsing the second string aswell to check if the next characters in the
            /// target string are equal to the characters in the string we want to find
            while (givenString[givenStringIterator] != '\0') {

                /// We check if we find a character in the target string different that a character in the
                /// string we search
                if (targetString[targetStringIterator] != givenString[givenStringIterator]) {

                    /// If that is the case, the iterator used to browse the searched string will
                    /// be reset, the iterator used to browse the target string will be reverted back to its
                    /// original state and the same for the position variable
                    givenStringIterator = 0;
                    targetStringIterator = position;
                    position = my_strlen(targetString);
                    /// After that is complete, the browsing of the searched string will be stopped
                    break;

                }

                givenStringIterator++;
                targetStringIterator++;

            }

        }

        targetStringIterator++;

    }

    /// After the search operation is done, the function will return the first appereance
    /// of the searched string in the target string. If the searched string does not appear
    /// in the target string, a null value will be returned
    return targetString + position;

}
