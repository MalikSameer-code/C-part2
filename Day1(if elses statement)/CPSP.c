#include<stdio.h>
int main()
{
    int CP;
    printf(" Enter Cost price ");
    scanf("%d",&CP);

    int SP;
    printf(" Enter Selling price ");
    scanf("%d",&SP);
   
   if (SP>CP)
   {
    int profit = SP-CP;
    printf("Profit is : %d",profit );
   }
   if (CP>SP)
   {

    int loss = CP-SP;
    printf("loss is : %d",loss );
   }
   
   if (SP==CP)
   {
    printf("no prifit no loss");
   }
   
   

}