#include<stdio.h>
int main()
{   
    int n;
    printf("enter any inter value to get table : ");
    scanf("%d",&n);
    for (int i=n; i<=n*10; i=i+n)
    {
        printf("%d\n",i);
    }
    
}