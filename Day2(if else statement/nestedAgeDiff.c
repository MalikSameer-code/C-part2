#include<stdio.h>
int main()
{
    int Ram,Shyam,Ajay;

    printf("Enter the age of Ram : ");
    scanf("%d",&Ram);

    printf("Enter the age of Shyam : ");
    scanf("%d",&Shyam);

    printf("Enter the age of Ajay : ");
    scanf("%d",&Ajay);
    if (Ram<Shyam && Ram<Ajay)
    {
        printf(" Ram is younger");
    }

    if (Shyam<Ram && Shyam<Ajay)
    {
        printf(" Shyam is younger");
    }
    
    if (Ajay<Shyam && Ajay<Ram)
    {
        printf(" Ajay is younger");
    }
    return 0;
}