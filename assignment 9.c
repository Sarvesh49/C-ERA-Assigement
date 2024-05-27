#include<stdio.h>
#include <math.h>
int main()
{
double a,b,c,discriminat,root1,root2,realpart,imagpart;
printf("enter values of a:\n b:\n c:\n");
scanf("%lf %lf %lf",&a,&b,&c);
discriminat=b*b-4*a*c;
if(discriminat>0)
{
    root1=(-b+sqrt(discriminat))/(2*a);
    root2=(-b+sqrt(discriminat))/(2*a);
    printf("root1=%.2lf and root2=%.2lf",root1,root2);
}
else if(discriminat==0)
{
    root1=root2=-b/(2*a);
    printf("root1=root2=%.2lf;",root1);
}
else
{
    realpart=-b/(2*a);
    imagpart=sqrt(-discriminat)/(2*b);
    printf("root1=%.2lf+%.2lfi and root2=%.2lfi",realpart,imagpart,realpart,imagpart);
}
return 0;
}