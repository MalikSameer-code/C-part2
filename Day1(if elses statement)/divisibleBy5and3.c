#include<stdio.h>
int main()
{
   int n;
   printf("Enter the number");
   scanf("%d",&n);

   if (n%5==0 && n%3==0)
   {
    printf("it is a number divisible by 5 and 3 ");
   }

   else{
    printf("it is number neither be divisible by 3 and 5 ");
   }
   
   

    return 0;
}