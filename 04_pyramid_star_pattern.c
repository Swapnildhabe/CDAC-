
//          * 
//        * * * 
//      * * * * * 
//    * * * * * * * 
//  * * * * * * * * * 

#include<stdio.h>

int main()
{   
    int r=5;
    for (int i =0; i < r; i++)
    {
        for (int j = 0; j < 2*(r-i)-1; j++)
        {
            printf(" ");
        }
        for(int j=0; j<2*i+1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    


}