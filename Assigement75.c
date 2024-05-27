#if, #ifdef, #else, #elfi, #endif – Conditional Compilation
Conditional Compilation directives help to compile a specific portion of the program or 
let us skip compilation of some specific part of the program based on some conditions.
 In our C Preprocessors article, we have discussed about such directives.

#ifdef: This directive is the simplest conditional directive. This block is called a conditional
group. The controlled text will get included in the preprocessor output if the macroname 
is defined. The controlled text inside a conditional will embrace preprocessing directives. 
They are executed only if the conditional succeeds. You can nest these in multiple layers, 
but they must be completely nested. In other words, ‘#endif’ always matches the nearest 
‘#ifdef’ (or ‘#ifndef’, or ‘#if’). Also, you can’t begin a conditional group in one file 
and finish it in another. 

Syntax

#ifdef MACRO
    controlled text
#endif
#ifndef: In #ifdef directive if the macroname is defined, then the block of statements after the #ifdef directive will be executed normally but in case it is not defined, the compiler will simply skip this block of statements. The #ifndef directive is simply the opposite of #ifdef directive. In case of #ifndef , the block of statements between #ifndef and #endif will get executed only if the macro or the identifier with #ifndef is not defined. 

Syntax

ifndef macro_name
    statement1;
    statement2;
    statement3;
    .
    .
    .
    statementN;
endif
Note: If the macro with name as ‘macroname‘ is not defined using the #define directive then only the block of statements will execute.

#if, #else and #elif: All these directives works together and control compilation of portions 
of the program using some conditions. If the condition with the #if directive results 
in a non zero value, then the group of line immediately after the #if directive 
will be executed otherwise if the condition with the #elif directive evaluates
 to a non zero value, then the group of line immediately after 
the #elif directive will be executed else the lines after #else directive will be executed. 

Syntax

#if macro_condition
   statements
#elif macro_condition
   statements
#else
   statements
#endif
Example

The below example demonstrates the use of conditional directives.


// C program to demonstrate the use of conditional
// directives.
 
#include <stdio.h>
 
#define gfg 7
 
#if gfg > 200
#undef gfg
#define gfg 200
#elif gfg < 50
#undef gfg
#define gfg 50
#else
#undef gfg
#define gfg 100
#endif
 
void printValue(int value) { printf("%d", value); }
 
int main()
{
    printValue(gfg); // gfg = 50
    return 0;
}
Output
50
Note: the entire structure of #if, #elif and #else chained directives ends with #endif.

