# c-make

### Automate compilation of C files by using make command

### Usage for Linux
* Use make command with name of file without ".c" extension

``` bash

 ~ $ ./make <file>
 # compile file with name is file.c and output file.exe
 
 ~ $ ./make -f <file>
 # compile entire folder and output file.exe

```

### Usage for Windows
``` bash

 ~ $ make <file>
 # compile file with name is file.c and output file.exe
 
 ~ $ make -f <file>
 # compile entire folder and output file.exe

```

#### Note: Several Linux devices have a similar package built in, Before Installation make sure you don't have it preinstalled

### Installation

* Run the following command snipet

``` bash

 ~ $ git clone https://github.com/hardope/c-make
 # Clone repository
 
 ~ $ cd c-make
 # enter Directory
 
 ~ $ gcc make.c -o make
 # compile c code to executable file
 
 # Note Run this command only for linux devices
 # Move executable file to bin folder
 # This is to make the executable available globally
 ~ $ mv make /root/bin

```

## Note
* FOR WINDOWS OS move make.exe to C:\Windows\System32
