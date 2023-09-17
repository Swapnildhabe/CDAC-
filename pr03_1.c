//3. WAP to print even numbers from 1 to 10.

#include<stdio.h>
int main()
{
    int i=0;
    int a;
        printf("Enter the number ::");
        scanf("%d",&a);

        while (i <= a)
        {
            printf("%d\n",i);
            i=i+2;
        }
    
    
    
    return 0;

}