#include<stdio.h>
int main()
{
   int n;
   printf("Enter the number");
   scanf("%d",&n);
   if (n>10 && n<20)
   {
    printf("the number lies between 10 and 20 ");
   }
   else{
    printf("the number less than 10 or greater than 20");
   }
   

    return 0;
}