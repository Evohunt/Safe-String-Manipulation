### Things changed in *`patch-0.16`*
---
   
   
1. Fixed a bug in  __`my_gets`__ function when the user could not read two or more strings consecutively without the program closing  
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
