/* Console Input Output Functions:
In C language, It has a collection of functions that can uses in a program with the required
 number of arguments written in parentheses. Console Input Output Functions also include in
the user program by using the header file which stands for standard input-output. header. 
Keyboard and screen together is say Console.

There are major two types of Console Input Output Functions in the C programming language.


1. Formatted input/output functions
2. Character input/output functions

Formatted input/output functions:
scanf() Function :
scanf() function is used to read/input values of variables using the standard input device such as a keyboard. It has the following syntax :

scanf("format string", &variable1,&variable2,&variable3,...&variablen);
where “format string” is the control string which represents the format specification, and the symbol & (ampersand) which represents the memory address where the variable value is to be stored.

Example :

1. scanf("%d%d", &a,&b);
2. scanf("%f%f", &a,&b);
3. scanf("%c", &school);
4. scanf("%s", str);
Console Input Output Functions in C

printf() Function:
printf() function is used to print/display values of variables using the standard output device such as a monitor. It has the following syntax:

("format string", variable1,variable2,variable3,...variablen);
where variable1,variable2,variable3,…variablen are variables whose values are to be displayed in the monitor.

1. printf("%d", a);
2. printf("%f", x);
Character input/output functions:
getch() Function:
getch() function is used to read a character from the keyboard and it does not expect the enter key press. It has the following syntax :
ch=getch();
Ezoic
Example:

char ctr;
ctr=getch();
getchar() Function:
getchar() function is used to read one character at a time from the standard input device such as a keyboard. It has the following syntax :

ch=getchar();
putchar() Function:
putchar() function is used to display one character at a time on the monitor screen. It has the following syntax:

putcher(ch);
Example:

char c='M';
putchar(c);
putch() Function:
putch() function is used to display a character on the monitor screen.It has the following syntax:

putch(ch);
Example:

char c='s';
putch(c);
getche() Function:
getche() function is used to read a character from the keyboard without expecting the enter key press. It has the following syntax :
[c]
ch=getche();
[/c]


Example:
[c]char ctr;
ctr=getche();
[/c]

gets() Function:
gets() function is used to read a string of characters including white spaces. It has the following syntax:
[c]
gets(str);
[/c]

Example:
[c]char str[15];
gets(str);
[/c]

puts() Function:
puts() function is used to display a character string on the monitor screen. It has the following syntax :
[c]
puts(str);
[/c]

Example:
[c]
char str[20]=” Hello World”
puts(str);
[/c]

clrscr() Function:
clrscr() function is used to clear the monitor screen. It has the following syntax :
[c]
clrscr();
[/c]

Note: The header file must include using this function in a program.
*/

