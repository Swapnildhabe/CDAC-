//     1 
//    2 3 
//   4 5 6 
//  7 8 9 10 
// 11 12 13 14 15
    
    #include<stdio.h>

    int main()
    {
        int row=5;
        int j=1;
        int row2=5;
        int num=1;
        for (int i = 0; i < row ; i++)
        {
            for (j=0 ; j < row2-1; j++)
            {
                printf(" ");
            }
            for (int a = 0; a <=i ; a++)
            {
                printf("%d ",num++);
            }
            
            printf("\n");
            row2--;
        }

        return 0;
        
    }