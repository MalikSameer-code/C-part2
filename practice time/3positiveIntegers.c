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

    if (a>b){
        if (a>c)
        
             printf("%d is the greatest",a);
    else
        printf("%d is the greatest",c);
    }    
    else{
        if (b>c)
        {
          printf("%d is the greatest ",b);

        }
        else{
            printf("%d is the greatest",c);
        }
        
    }

    


    
} 
