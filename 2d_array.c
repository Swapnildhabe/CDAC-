#include<stdio.h>
int main()
{
    int a[2][2], i, j;

    printf("Enter 4 elements::");

    for ( i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("2D array is::\n");
    for ( i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\t%d\t",a[i][j]);
        }
        printf("\n");
        
    }
    

}