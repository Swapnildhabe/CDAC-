#include <stdio.h>

int main()
{
    int a, b, c, d=0;

    printf("Enter The Number::");
    scanf("%d",&a);
    b=a;
     
    do
    {
        c=a%10;
        d=d*10+c;
        a=a/10;
    }
    while(a>0);
    if(d==b)
    {
        printf("You Enter value is palindrome");
    }
    else
    {
        printf("You Enter value is not palindrome");
    }
    

}