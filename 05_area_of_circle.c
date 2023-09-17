//Q1.4 WAP to calculate area of circle. (pi*r*r).

#include<stdio.h>

int main()
{
    float pi =3.142;
    float r;

    printf("Enter The Radius of Circle::");
    scanf("%f",&r);
    printf("Area Of Circle =%.2f",(pi*r*r));

    return 0;

}