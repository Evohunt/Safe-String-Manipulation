### Things changed in *`patch-0.17`*
---
   
   
1. Added __my_strchr__ function  
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
    
    

    
    

