#include <stdio.h>
int main()
{
    int days,weeks,years;
    printf ("enter the number of days:\n");
    scanf("%d",&days);
    years=days/365;
    weeks=(days-(years*365))/7;
    printf("%d:years; %d:weeks; %d:days;",years,weeks,days);
    return 0;
}