/*sprintf() Function:
The sprintf() function is used to write data to a character string. Unlike printf(), which prints to the console, sprintf() formats and stores the output in a string.
Syntax:
sprintf(string, format_specifier, &var1, &var2, ...);

string: Refers to the character string where the formatted output will be stored.
format_specifier: A character string containing the required formatting information.
var1, var2, etc.: Represent individual input data items.
Example:
char value[50];
int p = 20, q = 30, r;
r = p + q;
sprintf(value, "adding two numbers %d and %d the result is %d", p, q, r);
// Output: "adding two numbers 20 and 30 the result is 50"

sscanf() Function:
The sscanf() function reads data from a character string (instead of stdin) and extracts values based on specified format specifiers.
Syntax:
sscanf(string, format_specifier, &var1, &var2, ...);

string: Refers to the character string to read from.
format_specifier: A character string containing the required formatting information.
var1, var2, etc.: Represent individual input data items.
Example:
char instring[] = "Tutorials Point";
char string1[10], string2[10];
sscanf(instring, "%s %s", string1, string2);
// Output: "Tutorials" */