# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include "input_generator.h"

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