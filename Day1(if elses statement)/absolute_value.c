#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value ");
    scanf("%d",&n);
    if (n<0)
    {
        n=n*(-1);
       
    }
    printf("The absoluet value is : %d",n);
    return 0;
     
} 