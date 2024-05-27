/*getch(): This function reads a single character from the user at the console without
 echoing it (i.e., without displaying it on the screen). 
It’s commonly used for input where you want to capture a single keypress 
without waiting for the user to press Enter. For example, in menu-driven programs,
you can use getch() to read the user’s choice without displaying it on the screen.

getche(): Similar to getch(), this function also reads a single character from 
the user at the console, but it echoes the character (displays it on the screen).
 It’s useful when you want to show the user what they typed. For instance, 
when entering a password, you might use getche() to display asterisks or dots for each character.


getchar(): This function reads a single character from the user at the console, echoes it,
but requires the user to press the Enter key at the end. It’s commonly used for reading strings 
or individual characters when you need the user to confirm their input by pressing Enter.

Remember that these functions are part of the standard C library and are typically used
for simple console-based input scenarios.
*/ 