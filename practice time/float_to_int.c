#include<stdio.h>
int main ()
{
    float x;
    printf("Enter value of x : ");
    scanf("%f",&x);
    int y = x;
    float z = x-y;
    printf("fraction part is : %d",z);

    return 0;

}