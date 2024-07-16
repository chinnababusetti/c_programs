/* to know if an entered number is even or odd we need
   a codition to check whether a given number is even or odd.
   */
  #include<stdio.h>
  int main()
  {
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("entered number is EVEN");
    }
    else{
        printf("entered number is ODD");
    }
  }