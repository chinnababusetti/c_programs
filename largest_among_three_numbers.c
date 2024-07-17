#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf(" enter a,b,c values:");
    scanf("%d %d %d",&a,&b,&c);
   if(a>b && a>c){
     printf(" 'a' is large!" );
    }
   
   else if(b>a && b>c){
    printf("'b' is large!");
   }
   else{
    printf("'c' is large!");
   }
     
    return 0;
}