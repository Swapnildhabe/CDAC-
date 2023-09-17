// 1.WAP to check whether a number is divisible according to the following conditions.
// 1. no is divisible by 8 & 5;
// 2.no is divisible by 8;
// 3.no is divisible by 5;
// 4.no is divisible neither by 8 nor by 5;

#include<stdio.h>

int main()
{
    int num;
    printf("Enter any Number::");
    scanf("%d",&num);

    if(num%5==0 && num%8==0)
        printf("%d is divisible by 5 & 8",num);
    else if(num%8==0)
            printf("%d is divisible by 8",num);
    else if(num%5==0)
            printf("%d is divisible by 5",num);
    else
            printf("%d is divisible neither by 8 nor by 5",num);
    
}