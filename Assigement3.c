/*In C programming, there are two main types of console input/output functions:

Formatted Console Input Functions:
These functions allow you to format the input from the keyboard and display the output in a desired manner.
The primary formatted console input function is scanf(). It reads formatted input from the standard input (usually the keyboard).
You can use scanf() to read various data types such as integers, floats, characters, and strings.
The syntax for using scanf() is as follows:
scanf("format specifier", &variable);
For example, if you want to read an integer, you can use:
int num;
scanf("%d", &num);
Note that scanf() has limitations when taking string inputs; it ignores strings entered after a blank space. For multi-word string inputs, consider using gets().
Formatted Console Output Functions:
These functions allow you to print formatted output to the standard output (usually the console screen).
The primary formatted console output function is printf().
You can use printf() to display formatted output, including text and values of variables.
The syntax for using printf() is as follows:
printf("format specifier", arguments);
For example, to print an integer, you can use:
int result = 42;
printf("The answer is: %d", result);
The %d format specifier represents an integer value.*/