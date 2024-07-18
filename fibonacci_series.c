/* fibonacci series can be obtained by adding previous two values in a series of numbers
      ex= 0 1 1 2 3 5 8 13 .......*/
#include<stdio.h>
int main()
{
    int n,i=0;
    int first_value=0,second_value=1,next;
    printf("enter n value:");
    scanf("%d",&n);
    while(i<n)
    {
    if(i<=1)
    {
        next=i;
    }
    else{
        next=first_value+second_value;
        first_value=second_value;
        second_value=next;
    }
    printf("%d  ",next);
    i++;
    } 
    return 0; 

}