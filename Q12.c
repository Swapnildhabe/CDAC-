// 13. Write a program by using switch case if user enter 11 it will have are area of
// circle and when user enter 22 it will have area of rectangle and when user enter
// 33 it will give area of square when user enter 44 it will give area of triangle.

#include<stdio.h>

int main()
{
        
            float r;
            float pi=3.142;
            int a ;
            int b,h;
    int num;
    printf("Enter 11 for Calculate Area of Circlen\n");
    printf("Enter 22 for Calculate Area of Rectangle\n");
    printf("Enter 33 for Calculate Area of Square\n");
    printf("Enter 44 for Calculate Area of Trangle:: ");
    scanf("%d",num);

    switch (num)
    {
    case 11:
            printf("Enter Radius of Circle");
            scanf("%d",&r);
            printf("The Area Of Circle is :: %d",pi*r*r);
        break;
    case 22:
        
            printf("Enter Size of Rectangle A x B ::");
            scanf("%d%d",&a,&b);
            printf("The Area Of Rectagle  is :: %d",a*b);
        break;
    case 33:
        
            printf("Enter Size of Square A ::");
            scanf("%d",&a);
            printf("The Area Of Rectagle  is :: %d",a*a);
        break;
    case 44:
        
            printf("Enter Size of Trangle  B H ::");
            scanf("%d%d",&b,&h);
            int ans=0.5*b*h;
            printf("The Area Of Rectagle  is :: %d",ans);
        break;
        
    
    default:
        printf("You Enter Wrong Number !!");
        break;
    }
}