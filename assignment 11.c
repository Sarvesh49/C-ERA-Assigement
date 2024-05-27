#include<stdio.h>
int main()
{
    int n,i,num;
    printf("Enter a positive integer:\n");
    scanf("%d",&num);
    printf("factors of %d are:\n",n);
    for(i=1;i<=num;i++)
    {
        if (num%i==0)
        {
        printf("%d",i);
        }
    }
    return 0;
}