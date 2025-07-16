#include<stdio.h>
int main ()
{
    float x1, x2 , x3, x4 , x5 ;
    printf("Enter value of x1 x2 x3 x4 and x5 here : ");
    scanf("%f %f %f %f %f ",&x1,&x2,&x3,&x4,&x5);
     float percentage = (x1+x2+x3+x4+x5)/5;
     printf("The percentage is : %f ",percentage);

}