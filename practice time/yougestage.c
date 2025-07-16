#include<stdio.h>
int main()
{
    int R;
    printf("Enter age of Ram : ");
    scanf("%d",&R);
    int S;
    printf("Enter age of Shyam : ");
    scanf("%d",&R);
    int A;
    printf("Enter age of Ajay : ");
    scanf("%d",&R);

    if (R<S && R<A)
    {
      printf("Ram is youngest ");
    }
    
   else if (S<R && S<A)
    {
      printf("Shyam is youngest ");
    }
    else{
        printf("Ajay is the youngest");
    }
}