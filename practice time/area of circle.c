#include<stdio.h>
int main ()
{
    float radius;
    printf("Enter value of radius : " );
    scanf("%f",&radius);

    float pi = 3.14;
    float Area = 4*pi*radius*radius;
    printf("The Area of circle is : %f",Area);

}