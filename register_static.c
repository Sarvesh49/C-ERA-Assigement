write down c program using external variable
#include <stdio.h> 
  
extern int a;     // int var;  ->  declaration and definition 
                  // extern int var;  -> declaration 
  
int main()  
{   
    printf("%d", a); 
   
   return 0; 
}
what are register variables and static variables in c programing
The variables defined as the register is allocated the memory into the CPU registers depending upon the size of the memory remaining in the CPU.
We can not dereference the register variables, i.e., we can not use &operator for the register variable.
The access time of the register variables is faster than the automatic variables.
The initial default value of the register local variables is 0.
The register keyword is used for the variable which should be stored in the CPU register. However, it is compiler?s choice whether or not; the variables can be stored in the register.
We can store pointers into the register, i.e., a register can store the address of a variable.
Static variables can not be stored into the register since we can not use more than one storage specifier for the same variable.
Example 1
#include <stdio.h>  
int main()  
{  
register int a; // variable a is allocated memory in the CPU register. The initial default value of a is 0.   
printf("%d",a);  
}  
---------------------------------------------------------------------------------------------------------------------
The variables defined as static specifier can hold their value between the multiple function calls.
Static local variables are visible only to the function or the block in which they are defined.
A same static variable can be declared many times but can be assigned at only one time.
Default initial value of the static integral variable is 0 otherwise null.
The visibility of the static global variable is limited to the file in which it has declared.
The keyword used to define static variable is static.
Example 1
#include<stdio.h>  
static char c;  
static int i;  
static float f;   
static char s[100];  
void main ()  
{  
printf("%d %d %f %s",c,i,f); // the initial default value of c, i, and f will be printed.   
}  
---------------------------------------------------------------------------------------------------------------------
write down synatx for static variables and a program in c showing the usage of static variables

#include<stdio.h>  
void sum()  
{  
static int a = 10;  
static int b = 24;   
printf("%d %d \n",a,b);  
a++;   
b++;  
}  
void main()  
{  
int i;  
for(i = 0; i< 3; i++)  
{  
sum(); // The static variables holds their value between multiple function calls.    
}  
}  