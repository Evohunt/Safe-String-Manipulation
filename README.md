### Things changed in *`patch-0.16`*
---
   
   
1. Fixed __my_gets__ function, now it can read more strings consecutively without exiting the program  
    ```C
    my_gets (char givenString[])
    ```   
2. The following functions now make sure that the given strings are null-terminated:  
      ```C
      my_strcpy (char targetString[], char givenString[])
      ```  
      ```C
      my_strcat (char targetString[], char givenString[])
      ```  
      ```C
      my_gets (char givenString[])
      ```
