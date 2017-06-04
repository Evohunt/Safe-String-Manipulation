# include <stdio.h>
# include <stdlib.h>
# include "string_checker.h"

void string_fixer (char givenString[]) {

		int iterator = 0;
		int blankSpaceCounter = 0;

		while (givenString[iterator] != '\0') {

				if (givenString[iterator] == ' ') {

						blankSpaceCounter++;

				} else {

						blankSpaceCounter = 0;

				}

				if (blankSpaceCounter > 10) {

						break;

				}

				iterator++;

		}

		givenString[iterator - blankSpaceCounter] = '\0';

}

int string_length_compare (char targetString[], char givenString[]) {

		int targetStringLength = 0;
		int givenStringLength = 0;
		int iterator = 0;

		while (targetString[iterator] != '\0') {

				targetStringLength++;
				iterator++;

		} 

		iterator = 0;

		while (givenString[iterator] != '\0') {

				givenStringLength++;
				iterator++;

		}

		if (targetStringLength >= givenStringLength) {

				return 1;

		} else {

				return -1;

		}

}