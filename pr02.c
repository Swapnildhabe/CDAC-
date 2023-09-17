//2.WAP to calculate commission if sale amount is greater than 1000 then commission =15%.

#include<stdio.h>

int main()
{
    int value;
    int dis_value;

    printf("Enter The Sale Amount::");
    scanf("%d",&value);

    if(value > 1000)
    {
        dis_value=0.15*value;
        printf("Your Commission Amount is ::%d",dis_value);
    }
    else
        printf("%d is less than 1000, You will not get any Commission",value);

    return 0;
}