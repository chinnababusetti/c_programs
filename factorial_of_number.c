#include<stdio.h>
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int i=1,factorial=1;
    while(i<=n){

        factorial=factorial*i; 
        i++;    
    }
    printf("factorial of given number is:%d",factorial);
    return 0;
}