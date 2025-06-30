// Ques : take positive integer inpute and tell if it is even or odd. 



#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number :  ");
    scanf("%d",&n);
    if(n%2==0)
    {
      printf("Evenn number");
    }
    // if (n%2!=0)
    // {
    //     printf("Odd number");
    // }
    
     else{
        printf("Odd number");
     }
}