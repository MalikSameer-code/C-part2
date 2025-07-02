#include<stdio.h>
int main()
{
    int x = 3,y,z;
    
    y = x = 10;

    z = x<10;

   printf("\nx = %d y = %d z = %d",x,y,z);
    return 0;
}


//boolian if x==10{then first cheack computer it is x assign to 10 if not then its answer is fals(0 due to integer)},if x assign to 10 then its answer true(1).