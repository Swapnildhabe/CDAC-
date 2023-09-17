//3. WAP to print even numbers from 1 to 10.

#include<stdio.h>
int main()
{
    int i=0;
    int a=20;
        printf("Enter the number ::");
        scanf("%d",&a);
       
        do
        {
            if(i%2==0)
            printf("%d\n",i);
            i++;

        } while (i <=a);
        
        
        
    
    
    
    return 0;
    
}
