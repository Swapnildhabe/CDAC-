    //  '1'  2   3
    //  '4'  5   6 
    //  '7' '8' '9' 

    
    #include<stdio.h>


    int main()
    {
        int a[3][3]={1,2,3,4,5,6,7,8,9}, i, j,sum=0;

        printf("Enter 9 value ::\n");

        // for ( i = 0; i < 3; i++)
        // {
        //     for ( j = 0; j < 3; j++)
        //     {
        //         scanf("%d",&a[i][j]);
        //     }
            
        // }
        printf("2D array addition star::\n");
        for ( i = 0; i < 3 ; i++)
        {
            for ( j = 0; j < 3 ; j++)
            {
                if(i+j==0 || i+j==1 && i!=0 || i+j==2 && i!=0 && i!=1 || i+j ==3 && i!=1 || i+j==4)
                {
                printf("%d+",a[i][j]);
                sum=sum+a[i][j];
                }
            }
        
            
        }printf("=%d",sum);
        

    }