#include<stdio.h>

int main()
{
    int num;
    printf("Enter 1 to 12 month::");
    scanf("%d",&num);

    switch (num)
    {
    case 1: 
        printf("January 31 days");
        break;
    case 2: 
        printf("Febuary 28/29 days");
        break;
    case 3: 
        printf("March 31 days");
        break;
    case 4: 
        printf("April 30 days");
        break;
    case 5: 
        printf("May 31 days");
        break;
    case 6: 
        printf("June 30 days");
        break;
    case 7: 
        printf("July 31 days");
        break;
    case 8: 
        printf("August 31 days");
        break;
    case 9: 
        printf("September 30 days");
        break;
    case 10: 
        printf("October 31 days");
        break;
    case 11: 
        printf("Nohember 30 days");
        break;
    case 12: 
        printf("December 31 days");
        break;
    
    default:
        printf("You Enter Wrong Month!!!");
        break;
    }




}