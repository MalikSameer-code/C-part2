#include<stdio.h>
int main()
{
    int length;
    printf("Enter length of rectangle");
    scanf("%d",&length);

    int breath;
    printf("Enter breath of rectangle");
    scanf("%d",&breath);

    int peremeter = 2*(length+breath);
    int area = length*breath;

    if (area>peremeter)
    {
        printf("Area is greater than peremeter");
    }
    if (area<peremeter)
    {
        printf("Area is  not greater than peremeter ");
    }
    if (area==peremeter)
    {
        printf("Area is  not equal to peremeter ");
    }
    



}