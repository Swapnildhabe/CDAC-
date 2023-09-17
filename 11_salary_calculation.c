//11. Ramesh’s basic salary is input through the keyboard his DA is 40% of the basic salary
//and H.R.A is 25%, P.F=20% and TA is 30% of the basic salary.WAP to calculate the gross
//salary and net salary. 
#include<stdio.h>

int main()
{
    int basic_salary;
    printf("Enter The Basic Salary ::");
    scanf("%d",&basic_salary);

    float DA, HRA, PF, TA, Gross_salary;

    DA= 0.4*basic_salary;
    HRA=0.2*basic_salary;
    TA=0.3*basic_salary;


    Gross_salary= basic_salary+DA+HRA+TA;
    



    
}