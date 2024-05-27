#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("enter the numbers only in integer :");
    scanf("%d",&n);
    int count = 0;
    
    while(n>0){
        count++;
        n = n/10;
    }
    printf("No. of digits = %d", count);

}