/* table fomat
    2*1=2
    2**2=4
    2*3=6.......*/
#include<stdio.h>
int main()
{
    int n;
    printf("enter the table:");
    scanf("%d",&n);
    int i=1;
    for(i=1;i<=20;i++)
    {
       printf("%d * %d = %d\n",n,i,(n*i));
    }
    return 0;
}