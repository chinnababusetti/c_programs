#include<stdio.h>
int main()
{
    int n;
    printf("enter n'th value to be added:");
    scanf("%d",&n);
    int i,sum=0;
    for(i=1;i<=n;i++)
    {
        sum=sum+i;
        /* formula is  "(n(n+1))/2"    */
    }
    printf("sum of natural numbers is =%d",sum);
    return 0;
}