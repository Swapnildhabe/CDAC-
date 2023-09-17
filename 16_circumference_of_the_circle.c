// 16. WAP to calculate the circumference of the circle. (2*pi*r).05_area_of_circle.c

#include<stdio.h>

int main()
{
    float pi =3.142;
    float r;

    printf("Enter The Radius of Circle::");
    scanf("%f",&r);
    printf("Circumference Of Circle =%.2f",(2*pi*r));

    return 0;

}