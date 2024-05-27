#include <stdio.h>
int main()
{
    char Gender;
    printf("Enter the character for Gender:");
    scanf("%c",&Gender);
    switch(Gender){
        case 'M':
        printf("male");
        break;
        case 'f':
        printf("Female");
        break;
        case 'm':
        printf("male");
        break;
        case 'F':
        printf("Female");
        break;
        default:
        printf("unspecified gender");
        
        
    }
    return 0;
    
}