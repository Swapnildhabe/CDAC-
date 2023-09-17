#include<stdio.h>
int main()
{
    char str[20];
    int len;
    printf("Enter Your Name ::");
    scanf("%s",&str);

    for ( len = 0; str[len] !='\0'; len++);
    {
        
    }
    printf("%d",len);

    for ( len = 20; str[len] >=0; len--);
    {
     printf("%c",len);
        
    }

    return 0;

}