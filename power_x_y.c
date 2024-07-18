#include<stdio.h>
#include<math.h>

int main()
{
    int x,y;
    printf("enter x and y values:");
    scanf("%d %d",&x,&y);
    int i,power=x;
    for(i=1;i<y;i++){

        power=power*x;
     
    }
    printf("%d power of %d = %d",x,y,power);
    /*int z;
    z=pow(x,y);
    printf("power is:%d",z);*/
    return 0;
    
}