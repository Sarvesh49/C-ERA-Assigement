#include <stdio.h>
int main()
{
    float fahrenheit,celsius;
    printf("enter the temperature in degree fahrenheit:\n");
    scanf("%f",&fahrenheit);
    celsius=(fahrenheit-32)*5/9;
    printf("celsius:%.2f",celsius);
    return 0;
}
