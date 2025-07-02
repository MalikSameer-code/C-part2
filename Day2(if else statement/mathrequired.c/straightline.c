#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,x3,y3;
    printf("Enter value of x1 : ");
    scanf("%d",&x1);

    printf("Enter value of y1 : ");
    scanf("%d",&y1);

    printf("Enter value of x2 : ");
    scanf("%d",&x2);

    printf("Enter value of y2 : ");
    scanf("%d",&y2);
    
    printf("Enter value of x3 : ");
    scanf("%d",&x3);


    printf("Enter value of y3 : ");
    scanf("%d",&y3);


    if ((y2-y1)*(x3-x2)==(y3-y2)*(x2-x1))
    {
        printf("these points (x1=%d,y1=%d)  (x1=%d,y1=%d)  (x3=%d,x4=%d) are lies in straigh line",x1,y1,x2,y2,x3,y3);
    }
    else{
        printf("Not lies on the line");
    }
    
}