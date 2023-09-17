//13. WAP to calculate the total and avg of five subjects.

#include<stdio.h>
int main()
{
    float eng,phy,chem,math,comp, total, result;
    printf("Enter the 5 subject marks 50 outOFF::");
    scanf("%f%f%f%f%f",&eng,&phy,&chem,&math,&comp);

    total=eng+phy+chem+math+comp;
    result=(total/5);

    printf("The Average of 5 Subject is %.2f",result);
    
        return 0;


}