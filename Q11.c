// 11. Write a program to Calculate Product of Digits of a Number.
#include<stdio.h>

int main()
{
    int num;
    printf("Enter 4 digit Number ::");
    scanf("%d",&num);

    // for (int i = 1; i <= 4; i++)
    // {
        int ans=num%10;
               num= num/10;
        ans*=num%10;
                num= num/10;
        ans*=num%10;
          num= num/10;
        ans*=num%10;
        printf("The Produnct of 4 digit Number is ::%d ",ans);
        
    // }
    
    
}