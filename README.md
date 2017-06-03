### Things changed in *`patch-0.22`*
---
  
    
__1.__ Removed the old comments from the __`string_manipulation.c`__ file  
  
__2.__ Code formated in __`Carnegie Mellon University`__ style. For detailed information you can visit [this link](https://drive.google.com/file/d/0B0qJvJ1d8F8EeHkxY2lrUmxDOVE/view)  
  
__3.__ Added an interractive, user-friendly menu in the __`main.c`__ file for a better use of the functions  
  
__4.__ Added __`input_generator.c`__ and __`input_generator.h`__ containing the random string generator function  
   ```C
   char *random_string_generator(char *str, size_t size)
   ```
  
__5.__ Added __`string_checker.c`__ and __`string_checker.h`__ containing functions used to check for string errors
   ```C
   void string_fixer (char givenString[])
   ```  
     
   ```C
   int string_length_compare (char targetString[], char givenString[])
   ```

### Things changed in *`patch-0.21`*
---
   
   
__1.__ All the functions have been moved in a separate __`string_manipulation.c`__ C file and the prototypes added in the __`string_manipulation.h`__ header file  
  
__2.__ Added detailed comments for every function to make the user understand them better  
  
__3.__ A __`makefile`__ has been added to the project. For further instructions on how to use it click [here](https://github.com/Evohunt/Safe-String-Manipulation/blob/patch-0.21/instructions.md)  
  
__4.__ __`auto_select_path.exe`__ executable added to help the user avoid entering the path of the project every time he/she needs to execute it in the __`cmd`__. Further instructions on how to use it can be found [here](https://github.com/Evohunt/Safe-String-Manipulation/blob/patch-0.21/instructions.md)  
  
### Things changed in *`patch-0.20`*
---
   
   
* All the functions have been moved to a __`string_manipulation.h`__ now, so the main app is lighter.
  
### Things changed in *`patch-0.19`*
---
   
   
* Added __my_strstr__ function  
    ```C
    char *my_strstr (char targetString[], char givenString[])
    ```   
    Prints the first aparition of a string in another string  
    __Example input:__    
             
    ```C
    printf("%s", my_strstr("casablanca", "bla"));
    ```  
    __Example output:__    
    ```
    blanca
    ```  
    If the string can't be found inside the given string the function will return a null value  
      
### Things changed in *`patch-0.18`*
---
   
   
* Added __my_strncpy__ function  
    ```C
    void my_strncpy (char targetString[], char givenString[], int numberOfCharacters)
    ```   
    Copies the first given number of characters from a string to another string   
    __Example input:__    
             
    ```C
    char firstString[] = "Alexander";
    char secondString[] = "Michael";
    
    my_strncpy(firstString, secondString, 4);
    
    printf("%s", firstString);
    ```  
    __Example output:__    
    ```
    Mich
    ```  
    If the given number is 0, nothing will be copied and the string will remain intact  
    __Example input:__    
             
    ```C
    char firstString[] = "Magic";
    char secondString[] = "Dog";
    
    my_strncpy(firstString, secondString, 0);
    
    printf("%s", firstString);
    ```  
    __Example output:__    
    ```
    Magic
    ``` 
    
  ### Things changed in *`patch-0.17`*
---
   
   
* Added __my_strchr__ function  
    ```C
    char *my_strchr (char givenString[], char inputCharacter)
    ```   
    Prints the first aparition of the character in the given string  
    __Example input:__    
             
    ```C
    printf("%s", my_strchr("casablanca", 's'));
    ```  
    __Example output:__    
    ```
    sablanca
    ```  
    If the character can't be found inside the given string the function will return a null value  
    __Example input:__    
             
    ```C
    printf("%s", my_strchr("house", 'k'));
    ```  
    __Example output:__    
    ```
    <null>
    ``` 
    
### Things changed in *`patch-0.16`*
---
   
   
__1__. Fixed a bug in  __`my_gets`__ function when the user could not read two or more strings consecutively without the program closing     
__2__. The following functions now make sure that the given strings are null-terminated:  
      ```C
      my_strcpy (char targetString[], char givenString[])
      ```  
      ```C
      my_strcat (char targetString[], char givenString[])
      ```  
      ```C
      my_gets (char givenString[])
      ```
  
### Things changed in *`patch-0.15`*
---
   
   
* Added __my_strcmp__ function  
    ```C
    int my_strcmp (char firstString[], char secondString[])
    ```   
    Compares two given strings, and returns 3 different values: 
      
    `1` - if the first string is lexicographically greater than the second one  
    `0` - if the two strings are lexicographically equal  
    `-1`   - if the first string is lexicographically less than the second one  
    __Example input:__    
             
    ```C
    printf("Compare result: %d", my_strcmp("bbc", "abc")); 
    printf("Compare result: %d", my_strcmp("abc", "abc"));
    printf("Compare result: %d", my_strcmp("abc", "bbc"));
    ```  
    __Example output:__    
    ```
    Compare result: 1  
    Compare result: 0  
    Compare result: -1  
    ```  


    
    


