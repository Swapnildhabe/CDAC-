//6. WAP to calculate multiplication of three numbers

#include<stdio.h>

int main()
{
    int a,b,c,mul;

    printf("Enter The 1st value::");
    scanf("%d",&a);

    printf("Enter The 2nd value::");
    scanf("%d",&b);
    
    printf("Enter The 3rd value::");
    scanf("%d",&c);

    mul=(a*b*c);

    printf("Multiple of Three numbers are = %d",mul);
    
    return 0;

}