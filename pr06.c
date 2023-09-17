// 6. WAP to print the sum of individual five digit number.
#include<stdio.h>

int main()
{
   int num;
   int sum=0;
   printf("Enter Any Number ::");
   scanf("%d",&num);

    while (num!=0)
    {
        sum+=num%10;
        num=num/10;
    }
    printf("The Sum of %d",sum);
    return 0;
    
}
// 2147483647