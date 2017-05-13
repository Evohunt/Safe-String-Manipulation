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
