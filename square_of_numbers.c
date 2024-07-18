#include<stdio.h>
int main()
{
    int n,i,squares;
    printf("enter n'th number to be squared:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       squares=i*i;
       printf("%d  ",squares);

    }
    return 0;

}