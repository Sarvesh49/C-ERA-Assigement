#include<stdio.h>
int main()
{
double a,b;
printf("enter a:\n");
scanf("%lf",&a);
printf("enter b:\n");
scanf("%lf",&b);
a=a-b;
b=a+b;
a=b-a;
printf("after swapping,a=%.2lf\n",a);
printf("after swapping,b=%.2lf\n",b);
return 0;
}

// withput using temprory variables
#include<stdio.h>
int main()
{
    double f1,f2,temp;
    printf ("enter first number:\n")
    scanf ("%lf",&f1);
    printf ("enter second number:\n");
    scanf("%lf",&f2);
    temp=f1;
    f1=f2;
    f2=temp;
    printf ("after swapping, first number=%.2lf\n",f1);
    printf ("after swapping, second number=%.2lf\n",f2);
    return 0;
}