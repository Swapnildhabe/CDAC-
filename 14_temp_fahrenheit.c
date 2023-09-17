// . WAP to convert the temperature Fahrenheit degree into degree celcius.
// Celsius = ((Fahrenheit - 32) / (1.8)) & Fahrenheit = (1.8* Celsius) + 32
#include<stdio.h>
int main()
{
    float degree,fah;
    printf("enter the degree ");
    scanf("%d",&degree);
    fah=1.8*degree+32;
    printf("\n fahrenheit to celcius degree id %d",fah);

}