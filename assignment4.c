#include <stdio.h>
int main()
{
    int n1,n2,n3,n4,n5;
    float total,average,percentage;
    printf("enter marks for english:\n");
    scanf ("%d",&n1);
    printf("enter marks for physics:\n");
    scanf("%d",&n2);
    printf("enter marks for chemistry:\n");
    scanf ("%d",&n3);
    printf("enter marks for maths:\n");
    scanf("%d",&n4);
    printf("enter marks for computer:\n");
    scanf("%d",&n);
    total=n1+n2+n3+n4+n5;
    average=total/5;
    percentage=(total/500)*100;
    printf("total marks obtained:%.2f\n",total);
    printf("average marks :%.2f\n",average);
    printf("percentage :%.2f\n",percentage);
    return 0;
}