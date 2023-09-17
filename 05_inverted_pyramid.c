// * * * * * 
//  * * * *
//   * * *
//    * *
//     *
#include<stdio.h>
int main()
{
    int row=1;
    
    for (int  i = 5; i >= row; i--)
    {
        for (int j = 5; j > i; j--)
        {
            printf(" ");
        }
        for (int a = 0; a < i; a++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}