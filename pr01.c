#include<stdio.h>

int main()
{
    printf("\"befor go to\"\n");

    goto jump;
    printf("Exact next line after goto");


    jump: 
    printf("\n\"Jump here use goto\"");
}