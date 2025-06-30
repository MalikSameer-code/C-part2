#include<stdio.h>
int main()
{
    int n;
    printf("Enter value");
    scanf("%d",&n);
    if (n%5==0)
    {
        printf("Divisible by 5");
    }
    else{
        printf("not divisibe by 5");
    }
}