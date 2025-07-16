#include<stdio.h>
int main ()
{
    int n;
    printf("Enter Number : ");
    scanf("%d",&n);
    if (n>99 && n<999)
    {
        printf("given number is 3 digit number : ");
    }
    else{
        printf("Not a three digit number");
    }
    
}