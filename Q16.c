  #include<stdio.h>

    int main()
    {
        int row=5;
        int j=1;
        int row2=5;
        // printf("Enter The Row You Want ::");
        // scanf("%d",&row);
        for (int i = 0; i < row ; i++)
        {
            for (j=0 ; j < row2-1; j++)
            {
                printf(" ");
            }
            for (int a = 0; a <=i ; a++)
            {
                printf("* ");
            }
            
            printf("\n");
            row2--;
        }

        return 0;
        
    }