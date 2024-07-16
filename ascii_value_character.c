/* In c ASCII -american standard code for information interchange
   in this the alphabits or characters are assigned with a value
   for example for 'A'=65 and 'B'=66 and so on
   for 'a'=97 and 'b'=98 and so on */
   #include<stdio.h>
   #include<stdlib.h>
   int main()
   {
    char c;
    printf("enter a character:");
    scanf("%c",&c);
    //%c prints the character 
    //%d prints the ascii value of that character
    printf("the ASCII value of %c is :%d",c,c);
    return 0;
   }