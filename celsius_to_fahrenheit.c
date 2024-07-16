/* to convert celsius to fahrenheit we need
   1.celcius
   2.formula--> ,fahrenheit=(c*1.8)+32
    or (c*(9/5))+32         */
#include<stdio.h>
int main()
{
    float celsius;
    float fahrenheit;
    printf("enter celsius to convert:");
    scanf("%f",&celsius);
    fahrenheit = (celsius*1.8)+32;
    printf("fahrenheit heat:%f",fahrenheit);
    return 0;
}