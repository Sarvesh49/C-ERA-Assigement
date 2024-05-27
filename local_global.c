/*waht are different type of storage classes in c programing 
storage classes in C are used to determine the lifetime, visibility, memory location, and initial value of a variable. 
There are four types of storage classes in C
1 Automatic
2 External
3 Static
4 Register
-------------------------------------------------------
storage Storage Place	Default Value    Scope            	Lifetime
classes 
auto	RAM	            Garbage Value	 Local	                    Within function
extern	RAM	               Zero	         Global	Till the end of the main program Maybe
                                                declared anywhere in the program
static	RAM	               Zero         Local Till the end of the main program, 
                                                Retains value between multiple functions call
registe Register	    Garbage Value	Local	Within the function
------------------------------------------------------------------------------------------------
waht is scope and lifetime of a variable in c programing

The lifetime of a variable defines the duration for which the computer allocates memory for it (the duration between allocation and deallocation of memory).

In C language, a variable can have automatic, static or dynamic lifetime.

Automatic − A variable with automatic lifetime are created. Every time, their declaration is encountered and destroyed. Also, their blocks are exited.
Static − A variable is created when the declaration is executed for the first time. It is destroyed when the execution stops/terminates.
Dynamic − The variables memory is allocated and deallocated through memory management functions.
---------------------------------------------------------------------------------------------------------
define local and global variables in C programing write synatx for local vaiable in c programing

Variables that are declared inside a function or block are called local variables. They can be used only by statements inside that function or block of code. Local variables are not known to function outside their own. They have several key characteristics:

Scope: Local variables are only accessible within the function or block in which they are declared. This means they cannot be accessed or modified by other functions or outside of their defining block.
Lifetime: The lifetime of a local variable is limited to the duration of the function call in which they are defined. They are created when the function or block is entered and are destroyed when it is exited.
Initialization: The system does not automatically initialize local variables, meaning they contain garbage values if not explicitly initialized. It’s a good practice always to initialize local variables before use.
Memory Allocation: They are typically allocated on the stack, though this can depend on the compiler and the system architecture.
Usage: They temporarily store information within a function and help make the function more self-contained and less dependent on external variables.
---------------------------------------------------------------------------------------------------------
In the C programming language, global variables are declared outside of any function. These variables are accessible from any function within the same file or other files if the global variable is declared with the extern keyword. A global variable is available for use throughout your entire program after its declaration. Here are some key points about global variables in C:

Scope: Global variables have a program-wide scope, meaning they can be accessed from any part of the program after their declaration.
Lifetime: They are allocated memory for the entire lifetime of the program, meaning they exist from the start of the program until the program terminates.
Declaration: Global variables are typically declared at the top of a file, outside of any functions, and are initialized to default values (such as zero for integers) if not explicitly initialized.
Usage: They are used when multiple functions need to access the same data or when data needs to be preserved between function calls.
Extern Keyword: To use a global variable in a different file than the one where it was declared, the extern keyword is used in the other file to provide a declaration (not definition) of the variable.
Best Practices: While global variables can be useful, they are generally discouraged in modern programming practices due to their potential to create dependencies and complexities in the code, making it harder to debug and maintain.
Initialization: Global variables can be initialized with a value when declared. If not initialized, numeric global variables are automatically initialized to zero, and pointers are initialized to NULL.
---------------------------------------------------------------------------------------------------------
synatx for local variable

void Local()
{
      int a=10;  // local variable declaration
}
*/