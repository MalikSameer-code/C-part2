#include<stdio.h>
int main ()
{
    int l;
    printf("Enter length : ");
    scanf("%d",&l);
    int b;
    printf("Enter breath : ");
    scanf("%d",&b);

    int Area = l*b;
    int peremeter = 2*(l+b);

    if (Area>peremeter)
    {
        printf("The area of rectangle is greter tha peremeter");
    }
    
    
}