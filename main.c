/**
*       @file main.c
*
*       @brief  The main file of the project, containing all the created
*       libraries (string_manipulation.h and input_generator.h),
*       as well as a user-friendly menu designed for an easy
*       access to all the string manipulation C functions
*       reimplemented in this project.
*       
*       @author Dana Andrei - Iulian
*       @date 5/22/2017    
*/

# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include "string_manipulation.h"
# include "input_generator.h"

# define DIM 110000

char first_string[DIM];
char second_string[DIM];
char temp_string[DIM];
char temp_character;

int random_string_length;
int task_type;
int task_option;

int main()
{

        printf("Enter the length for the first string: ");
        scanf("%d", &random_string_length);
        my_strcpy(first_string, random_string_generator(temp_string, random_string_length));

        printf("Enter the length for the second string: ");
        scanf("%d", &random_string_length);
        my_strcpy(second_string, random_string_generator(temp_string, random_string_length));

        system("cls");

        printf("\nString 1: %s\n", first_string);
        printf("\nString 2: %s\n", second_string);

        printf("\n============================================================================\n\n");
        printf("*** Task menu ***\n");
        printf("\t1. Print legth\n");
        printf("\t2. Copy\n");
        printf("\t3. Copy number of characters\n");
        printf("\t4. Concatenate\n");
        printf("\t5. Lexicographically compare\n");
        printf("\t6. Get the first apparition of a character\n");
        printf("\n============================================================================\n");

        printf("\nEnter the task number: ");
        scanf("%d", &task_type);

        system("cls");

        switch (task_type) {

                case 1: { /* Print length instructions START */

                        printf("> Task options:\n\n");
                        printf("\t1. Length of the first string\n");
                        printf("\t2. Length of the second string\n");
                        printf("\t3. Length of both strings\n");
                        printf("\nEnter the option number: ");
                        scanf("%d", &task_option);

                        if (task_option == 1) {

                                printf("\nLength of the first string is: %d + 1\n", my_strlen(first_string));

                        }
                        else {

                                if (task_option == 2) {

                                        printf("\nLength of the second string is: %d + 1\n", my_strlen(second_string));

                                }
                                else {

                                        if (task_option == 3) {

                                            printf("\nLength of the first string is: %d + 1\n", my_strlen(first_string));
                                            printf("\nLength of the second string is: %d + 1\n", my_strlen(second_string));

                                        }
                                        else {

                                                printf("\n\nNo such option. Exiting...\n");
                                                return 0;

                                        }

                                }

                        }

                }
                break; /* Print length instructions END */

                case 2: { /* Copy instructions START */

                        printf("> Task options:\n\n");
                        printf("\t1. Copy the first string into the second string\n");
                        printf("\t2. Copy the second string into the first string\n");
                        printf("\nEnter the option number: ");
                        scanf("%d", &task_option);

                        if (task_option == 1) {

                                system("cls");

                                printf("Results:\n\n");
                                printf("> Before:\n\n");
                                printf("\tFirst String: %s\n", first_string);
                                printf("\tSecond String: %s\n", second_string);

                                my_strcpy(second_string, first_string);

                                printf("\n> After:\n\n");
                                printf("\tFirst string: %s\n", first_string);
                                printf("\tSecond string: %s\n", second_string);

                        }
                        else {

                                if (task_option == 2) {

                                        system("cls");

                                        printf("Results:\n\n");
                                        printf("> Before:\n\n");
                                        printf("\tFirst String: %s\n", first_string);
                                        printf("\tSecond String: %s\n", second_string);

                                        my_strcpy(first_string, second_string);

                                        printf("\n> After:\n\n");
                                        printf("\tFirst string: %s\n", first_string);
                                        printf("\tSecond string: %s\n", second_string);

                                }
                                else {

                                        printf("\n\nNo such option. Exiting...\n");
                                        return 0;

                                }

                        }

                }
                break; /* Copy instructions END */

                case 3: { /* Copy number of characters instructions START */

                        system("cls");

                        int temp_number_of_characters;

                        printf("Enter the number of characters to copy: ");
                        scanf("%d", &temp_number_of_characters);

                        system("cls");

                        printf("> Task options:\n\n");
                        printf("Copy the first %d characters from:\n", temp_number_of_characters);
                        printf("\t1. The first string into the second string\n");
                        printf("\t2. The second string into the first string\n");
                        printf("\nEnter the option number: ");
                        scanf("%d", &task_option);

                        if (task_option == 1) {

                                system("cls");

                                printf("Results:\n\n");
                                printf("> Before:\n\n");
                                printf("\tFirst String: %s\n", first_string);
                                printf("\tSecond String: %s\n", second_string);

                                my_strncpy(second_string, first_string, temp_number_of_characters);

                                printf("\n> After:\n\n");
                                printf("\tFirst string: %s\n", first_string);
                                printf("\tSecond string: %s\n", second_string);

                        }
                        else {

                                if (task_option == 2) {

                                        system("cls");

                                        printf("Results:\n\n");
                                        printf("> Before:\n\n");
                                        printf("\tFirst String: %s\n", first_string);
                                        printf("\tSecond String: %s\n", second_string);

                                        my_strncpy(first_string, second_string, temp_number_of_characters);

                                        printf("\n> After:\n\n");
                                        printf("\tFirst string: %s\n", first_string);
                                        printf("\tSecond string: %s\n", second_string);

                                }
                                else {

                                        printf("\n\nNo such option. Exiting...\n");
                                        return 0;

                                }

                        }

                }
                break; /* Copy number of characters instructions END */

                case 4: { /* Concatenate instructions START */

                        system("cls");

                        printf("> Task options:\n\n");
                        printf("\t1. Concatenate the first string at the end of the second string\n");
                        printf("\t1. Concatenate the second string at the end of the first string\n");
                        printf("\nEnter the option number: ");
                        scanf("%d", &task_option);

                        if (task_option == 1) {

                                system("cls");

                                printf("Results:\n\n");
                                printf("> Before:\n\n");
                                printf("\tFirst String: %s\n", first_string);
                                printf("\tSecond String: %s\n", second_string);

                                my_strcat(second_string, first_string);

                                printf("\n> After:\n\n");
                                printf("\tFirst string: %s\n", first_string);
                                printf("\tSecond string: %s\n", second_string);

                        }
                        else {

                                if (task_option == 2) {

                                        system("cls");

                                        printf("Results:\n\n");
                                        printf("> Before:\n\n");
                                        printf("\tFirst String: %s\n", first_string);
                                        printf("\tSecond String: %s\n", second_string);

                                        my_strcat(first_string, second_string);

                                        printf("\n> After:\n\n");
                                        printf("\tFirst string: %s\n", first_string);
                                        printf("\tSecond string: %s\n", second_string);

                                }
                                else {

                                        printf("\n\nNo such option. Exiting...\n");
                                        return 0;

                                }

                        }

                }
                break; /* Concatenate instructions END */

                case 5: { /* Lexicographically compare instructions START */

                        printf("String 1: %s\n\n", first_string);
                        printf("String 2: %s\n\n", second_string);

                        printf("Comparison result: %d", my_strcmp(first_string, second_string));

                }
                break; /* Lexicographically compare instructions END */

                case 6: { /* First apparition of a character instructions START */

                        system("cls");

                        printf("> Task options:\n\n");
                        printf("Select the string to work with:\n\n");
                        printf("\t1. First string\n");
                        printf("\t2. Second string\n");
                        printf("\nEnter the option number: ");
                        scanf("%d", &task_option);

                        system("cls");
                        if (task_option == 1) {

                                printf("First string: %s\n\n", first_string);

                        }
                        else {

                                printf("Second string: %s\n\n", second_string);

                        }

                        printf("Enter the character to search: ");

                        scanf(" %c", &temp_character);

                        system("cls");

                        printf("Results:\n\n");
                        if (task_option == 1) {

                                printf("First string: %s\n\n", first_string);

                        }
                        else {

                                printf("Second string: %s\n\n", second_string);

                        }

                        if (task_option == 1) {

                                printf("First apparitions of character: %s\n\n", my_strchr(first_string, temp_character));

                        }
                        else {

                                printf("First apparitions of character: %s\n\n", my_strchr(second_string, temp_character));

                        }

                }
                break; /* First apparition of a character instructions END */

                default: printf("\nError. No such option ...\n");

        }

        return 0;
}
