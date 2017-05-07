### Things changed in *`patch-0.17`*
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
