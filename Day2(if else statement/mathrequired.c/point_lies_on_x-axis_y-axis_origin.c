#include<stdio.h>
int main()
{
    int x,y;

    printf("Enter the value of x and y here ");

    scanf("%d %d",&x,&y);

    if (x==0 && y==0)
    {   
        printf("points (%d,%d) is origin ",x,y);
       
    }
    else if (y==0 )
    {
         printf("points (%d,%d) is lies on x-axis",x,y);
    } 
    else if (x==0 )
    {
        printf("points (%d,%d) is lies on y-axis",x,y);
    }     
    else 
    {
        printf("The point does not lies on x or y axis ");
    }
    

}