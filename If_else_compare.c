#include<stdio.h>

int main()
{
    int a,b,c,d;
    printf("Enter Any 4 number::");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
                printf("a is greter");
        }
    }
   if(b>c)
   {
        if(b>d)
        {
            printf("b is greter");
        }
   }
    if(c>d)
    {
        printf("c is greter");
    }
    else{
        printf("d is greter");
    }
    return 0;
}   