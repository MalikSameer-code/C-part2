#include <stdio.h>
int main()
{
    int a;
    printf("Enter 1st number : ");
    scanf("%d", &a);

    int b;
    printf("Enter 2nd number: ");
    scanf("%d", &b);

    int c;
    printf("Enter 3rd number : ");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("%d is greatest " ,a);
    }

    if (b > a && b > c)
    {
        printf("%d is greatest ",b);
    }

    if (c > b && c > a)
    {
        printf("%d is greatest ",c);
    }

    return 0;
}