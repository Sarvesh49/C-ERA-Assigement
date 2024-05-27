#include <stdio.h>
int main()
{
    int n;
    printf("Enter number:\n");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("The entered number is even");
    }
    else
    {
        printf("The entered number is odd");
    }
    return 0;
}