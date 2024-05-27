Predefined Macros
ANSI C defines a number of macros. Although each one is available for use in programming,
the predefined macros should not be directly modified.

Sr.No.	Macro & Description
1	
__DATE__

The current date as a character literal in "MMM DD YYYY" format.

2	
__TIME__

The current time as a character literal in "HH:MM:SS" format.

3	
__FILE__

This contains the current filename as a string literal.

4	
__LINE__

This contains the current line number as a decimal constant.

5	
__STDC__

Defined as 1 when the compiler complies with the ANSI standard.

Let's try the following example −

Live Demo
#include <stdio.h>

int main() {

   printf("File :%s\n", __FILE__ );
   printf("Date :%s\n", __DATE__ );
   printf("Time :%s\n", __TIME__ );
   printf("Line :%d\n", __LINE__ );
   printf("ANSI :%d\n", __STDC__ );

}
When the above code in a file test.c is compiled and executed, it produces the following result −

File :test.c
Date :Jun 2 2012
Time :03:36:24
Line :8
ANSI :1