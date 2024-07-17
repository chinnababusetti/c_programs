/* if a year is divisible by 4 or 400 it is a leap year
  otherwise it is not a leap year..*/
  #include<stdio.h>
  int main()
  {
    int year;
    printf("enter year: ");
    scanf("%d",&year);
    if((year%4==0) &&((year%400==0 || year%100!=0)))
    {
        printf("leap year!");
    }
    else{
        printf("not a leap year!");
    }
    return 0;
  }