#include<stdio.h>
int main()
{
    int cp;
    printf("Enter cost price : ");
    scanf("%d",&cp);

    int sp;
    printf("Enter selling price : ");
    scanf("%d",&sp);

    if (sp>cp)
    {
        printf("profit is : %d",sp-cp);
    }
    
     else if(cp>sp)
    {
        printf("loss is : %d",cp-sp);
    }
    else{
        printf("no profit no loss");
    }
    
    
    
    
}