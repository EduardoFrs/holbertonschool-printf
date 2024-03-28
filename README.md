
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

## Examples
* Character

        #include "main.h"
        #include <stdio.h>

        int main(void)
        {
            _printf("Character : [%c, %c]\n", 'c', 'C');

            return (0);
        }
 Output : 

    ./testchar
    Character : [c, C]

* String
        
        #include "main.h"
        #include <stdio.h>

        int main(void)
        {
            _printf("String : [%s]\n", "Chong is the best SWE");
        
            return (0);
        }
Output :

    ./teststring
    String : [Chong is the best SWE]

* %

        #include "main.h"
        #include <stdio.h>

        int main(void)
        {
            _printf("Percent : [%%]\n");

            return (0);
        }
Output :

    ./testpercent
    Percent : [%]

* Decimal / Integer

        #include "main.h"
        #include <stdio.h>

        int main(void)
        {
            int len;

            len = _printf("please give us a good rating.                                                                      \n");
            _printf("Our rating : [%d/%i]\n", len, len);

             return (0);
        }

Output :

    ./testdec_int
    please give us a good rating.
    Our rating : [100/100]


## Man page

The [Man page](https://github.com/EduardoFrs/holbertonschool-printf/blob/main/man_3_printf) of the function can be checked here.


## Flowchart

![flowchart of function](https://github.com/EduardoFrs/holbertonschool-printf/blob/main/flowchart.JPG)
## Authors
* Lucas CHUONG DEBORT
* Eduardo RIBEIRO FERNANDES
