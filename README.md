### Things changed in *`patch-0.17`*
---
   
   
* Added __my_strncpy__ function  
    ```C
    void my_strncpy (char targetString[], char givenString[], int numberOfCharacters)
    ```   
    Copies the first given number of characters from a string to another string 
    __Example 1 input:__    
             
    ```C
    char firstString[] = "Alexander";
    char secondString[] = "Michael";
    
    my_strncpy(firstString, secondString, 4);
    
    printf("%s", firstString);
    ```  
    __Example 1 output:__    
    ```
    Mich
    ```    
    __Example 2 input:__    
             
    ```C
    char firstString[] = "Magic";
    char secondString[] = "Dog";
    
    my_strncpy(firstString, secondString, 0);
    
    printf("%s", firstString);
    ```  
    __Example 2 output:__    
    ```
    Magic
    ``` 
