// 5. WAP to calculate the factorial of a number.
#include<stdio.h>
int main()
{
     int num, fact=1, i=1;

    printf("Enter The number ::");
    scanf("%d",&num);

    while (i <=num )
    {
        fact=fact*i;
        i++;
    }

    printf("The factorial %d is %d",num, fact);

    return 0;
}