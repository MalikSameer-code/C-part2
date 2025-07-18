#include<stdio.h>
int main()
{
    int R;
    printf("Enter age of Ram : ");
    scanf("%d",&R);
    int S;
    printf("Enter age of Shyam : ");
    scanf("%d",&S);
    int A;
    printf("Enter age of Ajay : ");
    scanf("%d",&A);

    if (R>S)
    {
      if (R>A)
        printf("%d is the younger ",S);
      else
        printf("%d is the younger ",A);
    } 
    if (S>R)
    {
      if (S>A)
        printf("%d is the younger ",R);
      else
        printf("%d is the younger ",A);
    }
    
}