//3. WAP to calculate simple interest. (si=p*n*r)/100. 
#include<stdio.h>

int main()
{
    float si, p, n, r;

    p=25000, n=5, r=6.5;

    printf("Simple Interst On %.1f IR= %.1f, No.of Years= %.1f is= %.1f\n ",p,r,n,si=(p*n*r)/100 );
    printf("SI is= %.1f, Total Amount= %.1f",si,si+p );

    return 0;
}
