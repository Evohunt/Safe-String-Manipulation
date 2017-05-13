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

