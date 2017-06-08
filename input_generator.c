/**
*		@file 	input_generator.c
*		@brief 	Generates a random string as input
*
*		@author Dana Andrei - Iulian
*		
*		@date 	5/25/2017
*/
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include "input_generator.h"

/**
*       This function will generate a random string containing multiple
*       characters including spaces, the length of the random generated
*       string depending on the value of the second parameter.
*
*       @author Dana Andrei - Iulian
*
*       @param *str     The array in which the input will be stored
*       @param size     The size of the generated string
*
*       @date 5/25/2017
*/
char *random_string_generator(char *str, size_t size) {

    	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ ";

    		if (size) {

        			--size;

        			size_t n = 0;

        			for (n = 0; n < size; n++) {

            				int key = rand() % (int) (sizeof charset - 1);
            				str[n] = charset[key];

       				}

        			str[size] = '\0';

    		}
    		
    	return str;
}
