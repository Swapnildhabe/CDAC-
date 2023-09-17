// 4. WAP to print sum of first 10 numbers.
#include<stdio.h>

int main()
{
    int i=1;
    int sum=0;

    while (i<=10)
    {
        sum=sum+i;
        i++;
    }
    printf("The Sum of First 10 Natural Numbers is = %d",sum);
    

    return 0;
    
}