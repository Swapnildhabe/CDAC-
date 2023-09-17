//Q1.1 WAP to calculate the sum of two variables. ?

#include<stdio.h>
#include<stdlib.h>

int main()

{
    int a,b,sum;

    printf("Enter the 1st value :-");
    scanf("%d",&a);

    printf("Enter the 2nd value :-");
    scanf("%d",&b);

    sum = a + b;

    printf("Sum of %d + %d = %d", a,b,sum);


    return 0;
    
}