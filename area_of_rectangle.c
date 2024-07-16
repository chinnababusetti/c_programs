/* for area of rectangle we need
    1.length;
    2.breath;
 now formula,area of rectangle = length * breath; */
#include<stdio.h>
int main()
{
    float length;
    float breath;
    float area;
    printf("enter length of rectangle: \n");
    scanf("%f",&length);
    printf("enter breath of rectangle: \n");
    scanf("%f",&breath);
    area = length * breath;
    printf("the area of rectangle is:%f",area);
    return 0;
}