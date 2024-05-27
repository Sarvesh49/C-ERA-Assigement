#include <stdio.h>
#include<math.h>
int main()
{
    double p,r,t,ci,amt;
    printf ("principle:\n");
    scanf("%lf",&p);
    printf ("rate:\n");
    scanf("%lf",&r);
    printf ("time:\n");
    scanf("%lf",&t);
    amt=p*((pow((1+r/100),t)));
    ci=amt-p;
    printf("compound interest:%lf\n",ci);
    return 0;
}