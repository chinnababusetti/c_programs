/* to swap two numbers to two different variables
  we need another temporary variable .*/
  #include<stdio.h>
  int main()
  {
    int a;
    int b;
    int temp;
    printf("enter 'a' value:");
    scanf("%d",&a);
    printf("enter 'b' value:");
    scanf("%d",&b);
    printf("value of 'a' before swap:%d\n",a);
    printf("value of 'b' before swap:%d\n",b);
    temp=a;
    a=b;
    b=temp;
    printf("value of 'a' after swap:%d\n",a);
    printf("value of 'b' after swap:%d",b);

    return 0;

  }