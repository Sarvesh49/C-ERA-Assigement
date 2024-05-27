/*
#include
Inserts a particular header from another file.
Used to include a file in the source code program
------------------------------------------------------------------------------------------------
The #include preprocessor directiv e in C is used to include header files in your program. 
Header files contain declarations for functions, variables, and other constructs that 
you can use in your code. Let’s break down the syntax and provide an example:

Syntax of #include:
To include a system header file (such as standard library headers), use:
#include <file_name>

To include your own custom header file (located in the current directory), use:
#include "file_name"

Example: Suppose we want to include the standard I/O functions from the stdio.h header file.
Here’s how you would use #include:
#include <stdio.h>

int main() {
    printf("Hello, C!\n");
    return 0;
}
In this example, the #include <stdio.h> directive allows us to use the printf function 
from the standard library.
*/