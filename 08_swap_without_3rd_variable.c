//8. WAP to interchange the values of two variables without using third variable. 
#include<stdio.h>

int main()
{
    int a,b;

    printf("Enter the value of a and b:: ");
    scanf("%d%d",&a,&b);

    printf("The value of Before Inrerchange a= %d, b= %d\n", a,b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("The value of After Inrerchange a= %d, b= %d", a,b);




}
