#include<stdio.h>
int main()
{
    int n,reverse=0,remainder,orginial;
    printf("Enter the intger :");
    scanf("%d",&n);
    orginial=n;
    while(n!=0){
        remainder=n%10;  // r=2345%10=5
        reverse=reverse*10+remainder; // r=0*10+5 =r=5
        n/=10;
    }
    if(orginial==reverse){
        printf("%d is a palindrome",orginial);
    }
    else{
        printf("%d is not a palindrome",orginial);
    }
    return 0;
}
    
