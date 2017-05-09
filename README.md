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
    If the character can't be found inside the given string the function will return a null value  
