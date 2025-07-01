#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter 1st side of triangle a");
    scanf("%d",&a);

    printf("Enter 2nd side of triangle b");
    scanf("%d",&b);

    printf("Enter 3rd side of triangle c");
    scanf("%d",&c);

    if ((a+b)>c && (b+c)>a && (a+c)>b)
    {
        printf("Then %d and %d and %d are the side of triangle ",a,b,c);
    }
    else{
        printf("Invalid triangle "); 
    }
    
}