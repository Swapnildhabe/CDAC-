// 6. Write a program to print EVEN numbers from 1 to N using a while loop.
#include<stdio.h>

int main()
{
    int num;
    int i=1;
    printf("Enter Number To Print The Up Enven Numbers ::");
    scanf("%d",&num);
    while (i<=num)
    {
        if (i%2==0)
        {
            printf("%d, ",i);
        }
        i++;
        
    }
    
    {
        while (i%2==0)
        {
            printf("%d",num);
        }
        num++;
    
    }
    

}