//9. WAP to add, sub, mul, div, mod two variables and print the result. 

#include<stdio.h>

int main()
{
    int a, b, sum, sub, mul, div, mod;

    printf("Enter the Value of A & B ::\n");
    scanf("%d%d",&a,&b);
    
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    mod=a%b;
    
    printf(" sum= %d \n sub= %d \n mul= %d \n div= %d \n mod= %d \n", sum, sub, mul, div, mod);

    return 0;

}