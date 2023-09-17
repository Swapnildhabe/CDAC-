#include<stdio.h>
int main()
{
    int x, n, i;
    printf("Enter The number For Table");
    scanf("%d",&x);

    for(i=1;i<=10;i++)
    {
        n=x*i;
            printf(" %d\n ",n);
    }
}