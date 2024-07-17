/* we have to know the formula
   i.e, x= -b  +or- root(b*b - 4ac) who;e divide by 2a*/
   #include<stdio.h>
   #include<math.h>

   int main()
   {
    float a,b,c;
    float x,y;
    printf("enter a,b,c values:");
    scanf("%d%d%d",&a,&b,&c);
    x=  (-b+ sqrt((b*b)-(4*a*c))) /(2*a) ;
    y=  (-b- sqrt((b*b)-(4*a*c))) /(2*a) ;
    printf("the roots of quadratic equation is:x=%f ,y=%f ",x,y);

   }