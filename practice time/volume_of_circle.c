#include<stdio.h>
int main ()
{
    float radius ;
    printf("Enter value of radius :");
    scanf("%f",&radius);

    float pi = 3.14;
    float Volume = 4*pi*radius*radius*radius/3;
    printf("Volume of circle is : %f",Volume);
}