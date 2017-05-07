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
