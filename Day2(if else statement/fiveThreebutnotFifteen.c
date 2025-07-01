#include<stdio.h>
int main()
{
   int n;
   printf("Enter the number");
   scanf("%d",&n);

   if (n%5==0 || n%3==0)
   {
    if (n%15!=0)
    {
        printf("the number is divisible by 5 and 3 but not 15 ");
    }
    else
    {
        ("the nunber is divisible by fifteen");
    }

   }

   else{
    printf("the number is neither be divisible by 3 and 5 and 15");
   }
   
   

    return 0;
}