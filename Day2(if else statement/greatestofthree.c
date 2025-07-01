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

    if (a > b)
    { // b out of race
        if (a>c)
    
            printf("%d is greatest " ,a);
        else // a<c
          printf("%d is greatest " ,c);
            
        
    }

    
    if (a > b)
    { // b out of race
        if (a>c)
           printf("%d is greatest " ,a);
        else // a<c
            printf("%d is greatest " ,c);
            
        
    }
    
    if (b > a)
    { // a out of race
        if (b>c)
    
            printf("%d is greatest " ,b);
        else // b<c
          printf("%d is greatest " ,c);
            
        
    }

    return 0;
}