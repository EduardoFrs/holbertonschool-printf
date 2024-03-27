## C - printf
This project is implementing a function '_printf' that produces output according to a given format, he is similar to the standart 'printf' function in C. 

## Description of '_printf' function
The '_printf' function is used to print an output to stdout, according to a format string that specifies how the argument are converted handling conversion specifiers.

Prototype : int _printf(const char *format, ...);

Conversion specifiers we handle for this project : 
    c : character
    s : string
    % : percent sign
    d : decimal number 
    i : integer

## Compilation
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

## Requirements
Work environment : Ubuntu 20.04 using gcc
Coding style     : Betty
Header file      : main.h 
Allowed editors  : vi, vim, emacs

No more than 5 function per file.
Use of global variables are not allowed.
Header files should be include guarded.
All files should end with a new line.