//2.WAP to convert temperature from Celsius to Fahrenheit and vice versa.

#include<stdio.h>

int main()
{
    float a, b, celsius, fahrenheit;
    int c;

    printf("Enter 1 for convert Celsius to Fahrenheit");
    printf("Enter 2 for convert Fahrenheit to Celsius");
    scanf("%d",&c);

    switch(c)
    {

    case 1:
        printf("Enter temperature in Celsius");
        scanf("%f",&a);
        celsius=5* (a - 32) / 9;
        printf("Celsius Temperature is %f",celsius);
    case 2:
        printf("Enter temperature in Fahrenheit");
    
    
    }







}