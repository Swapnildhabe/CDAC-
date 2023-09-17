//7. WAP to interchange the values of two variables with using third variable. 
#include<stdio.h>

int main()
{
         
         int a=10,b,c;

        a=10;
        b=20;

        printf("Before the Interchange Value a= %d, b= %d\n",a,b);

        c=a;
        a=b;
        b=c;
        printf("After the Interchangfe Value a= %d, b= %d\n",a,b);

        return 0;
}   