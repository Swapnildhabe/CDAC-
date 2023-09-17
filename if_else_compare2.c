#include<stdio.h>

int main()
{
    int a,b,c,d;

    printf("Enter any Four number ::");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    if(a>b || a>c || a>d)

        printf("a is Gretest Value");

    if(a>b || a>c || a>d)

        printf("A is Gretest Value");
    
    if(b>c || b>d )

        printf("B is Gretest Value");

    if(c>d)
         printf("C is Gretest Value");
    
    else
         printf("D is Gretest Value");
        
        
}