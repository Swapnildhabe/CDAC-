#include<stdio.h>

int fact(int);
     
int main()
{
     int a=10;
    // printf("Enter Number For Factorial::");
    // scanf("%d",&a);

        fact(a);
    
}

int fact(int n1)
{
        int fact=1;
    for (int i=n1 ; i >= 0 ; i--)
    {
        fact=fact*i;
    }        
    printf("Factorial of %d is %d",n1,fact);
}