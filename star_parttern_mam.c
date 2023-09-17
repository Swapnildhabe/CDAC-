#include<stdio.h>
int main()
{

    int r, c, s, rows=5;
    // printf("\nEnter Number of Rows");
    // scanf("%d",&rows);

    for (r = 0; r < rows; r++)

        for ( c = 0; c <2*(rows-r); c++)
        {
            printf(" ");
        }
    for ( s = 0; s < (2*r+1); s++)
    {
        printf("*");
    }
    return 0;
        
    
}