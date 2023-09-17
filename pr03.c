//3.WAP to find entered number is even or odd.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter Any Number to check Even OR Odd::");
    scanf("%d",&num);

    if((num%2)==0)
    {
        printf("You Enter Value is Even");
    }
    else
        printf("You Enter Value is Odd");

}