// * * * * * 
// * * * *
// * * *
// * *
// *
#include<stdio.h>

int main()
{
    int row=1;
    for (int i = 5; i >= row; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }
        
        printf("\n");
        
    }
    
}