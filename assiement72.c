/*
The C Preprocessor is not a part of the compiler, but is a separate step in the compilation
process. 
In simple terms, a C Preprocessor is just a text substitution tool and it instructs the compiler
to do required pre-processing before the actual compilation. We'll refer to the C Preprocessor 
as CPP.

All preprocessor commands begin with a hash symbol (#). It must be the first nonblank character,
and for readability, a preprocessor directive should begin in the first column. 
In C programming, #define is a preprocessor directive that is used to define macros. 
The macros are the identifiers defined by #define which are replaced by their value before
compilation. We can define constants and functions like macros using #define.
The generics in C are also implemented using the #define preprocessor directive 
along with _Generic.

Syntax of C #define
The syntax of #define preprocessor directive in C is:

For Defining Constants
#define MACRO_NAME value

For Defining Expressions

#define MACRO_NAME (expression within brackets)
For Defining Expression with Parameters
Arguments passed in the macros can be used in the expression.

#define MACRO_NAME(ARG1, ARG2,..) (expression within brackets)

*/