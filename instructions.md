![alt text](http://i67.tinypic.com/2ebwumg.png "Click for instructions")
  
  
### Instructions for *`auto_find_path.exe`* (Windows only)  


In order to make the executable work for you, follow these steps:  
__1.__ __`Right click`__ the executable, then click on __`Edit`__  
  
__2.__ Now, all you need to do is replace __`C:\Users\Evohunt\Desktop\Facultate\Semestrul 2\PT Project\Safe String Manipulation`__ with the location where you downloaded the project  
  
---
  
### Instructions for *`makefile`* (Windows only)  
  

Before you continue make sure you have the __`compiler path`__ set properly. You can follow [this](https://www.youtube.com/watch?v=8Ib7nwc33uA) tutorial.  
To run the makefile you need to do the following:  

__1.__ Run the __`auto_select_path.exe`__ executable and a cmd window will pop up  
  
__2.__ Type __`make -f makefile`__ and press __`Enter`__. Note that you only have to do this once. You need to do this again if you decide to modify something in the project.  
  
__3.__ Now, you can type __`run_project.exe`__ to start the project. 
  
---

### 'make' command not recognized ERROR FIX (Windows only)  
  
  
If you followed the above steps but the command line still doesn't recognize the __`make`__ command, please follow the next steps:  
  
__1.__ First, you will need a archive program like WinRar, download link [here](http://www.win-rar.com/download.html?&L=0)  
  
__2.__ Now, download [this](https://drive.google.com/file/d/0B0AO1uT-rzMLVGxyUURabTZEYnc/view?usp=sharing) file. Don't worry, the file hase been scanned for malware.
  
__3.__ Go to your MinGW\bin folder (mine is __`C:\Program Files (x86)\Codeblocks\MingGW\bin`__) and extract the file you downloaded there
  
__4.__ If you have __`cmd`__ opened, close it and run it again. The problem should be fixed now. To check if it works, type __`make -v`__ and press __`ENTER`__. It should look like this:
