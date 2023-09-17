// 15. WAP to calculate the sum of individual digit of a 4 digit number. (d1=n%10;n=n/10).
#include<stdio.h>

int main()
{
    int n,a, s=0;

    printf("Enter 4 digit number::");
    scanf("%d",&a);
    int base=a;
    while(n>0)
    {
        n=a%10;
        s+=n;
        a=a/10;
    }
   printf("Sum Of individual %d is ::%d",base,s);
}
