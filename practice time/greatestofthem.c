#include<stdio.h>
int main()
{
    int a;
    printf("Enter value of a : ");
    scanf("%d",&a);
    int b;
    printf("Enter value of b : ");
    scanf("%d",&b);
    int c;
    printf("Enter value of c : ");
    scanf("%d",&c);

    if (a>b  && a>c)
    {
        printf("a is the greatest number");
    }
     else if (b>a  && b>c)
    {
        printf("b is the greatest number");
    }

    


    
} 
