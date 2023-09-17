#include<stdio.h>
void fact(int);

int main()
{
    int a;
    printf("Enter Number For Factorial::");
    scanf("%d",&a);

        fact(a);
    
}

void fact(int n1)
{
        int fact=1;
    for (int i = n1; i != 0 ; i--)
    {
        fact=fact*n1;
    }        
    printf("Factorial of %d is %d",n1,fact);
}
