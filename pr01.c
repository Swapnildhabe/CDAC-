//1.WAP to calculate total amount if purchase amount is greater than 1500 then discount is Rs. 200.


#include<stdio.h>
int main()
{
    int P_amount, disc;
    printf("Enter The Purchase amount ::");
    scanf("%d",&P_amount);
    
    

    if(P_amount > 1500 )
    {   
        disc=P_amount-200;
    
        printf("You Can get Rs 200 Discount\nYoue total Amount is = %d",disc);
    }
    else
        printf("Yout Purchase Amount is Less Than Rs 1500 \nYour Total Purchase Amount is = Rs %d ",P_amount);
     
    
    return 0;

}