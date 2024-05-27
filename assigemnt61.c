/*These are also referred to as the four primary storage class specifiers in C. 
Here is a detailed explanation of the four: 

auto: Variables declared with the auto storage class in C are automatically created within a code block (usually within a function) and are destroyed when the block exits.
This storage class is default for all local variables in C, so explicitly using “auto” 
is optional.

register: The “register” storage class is used to suggest to the compiler 
that a variable be stored in a CPU register for faster access. However, 
it’s merely a suggestion, and the compiler might or might not comply. 
Like “auto” variables, “register” variables have block scope.

static: Variables with the “static” storage class persist throughout the program’s execution.
A static variable retains its value between function calls when declared inside a function.
If declared outside a function, it becomes accessible only within the file where it’s declared, 
acting as a file-local variable.

extern: The “extern” storage class is used to declare variables or functions defined in other files. 
It’s used to access global variables or functions defined in a separate file 
from where they’re being used. When used to declare a variable, it refers to a global 
variable defined elsewhere.*/
 