// //A student appear in examination of five papers each paper contains 50 marks calculate total and percentage of student and display the grades according to the following condition.
// Percentage Grade
// >=90 A+
// 80 to 89 A
// 70 to 79 B+
// 60 to 69 B
// 50 to 59 C
// 40 to 49 Fail.
#include<stdio.h>
int main()
{
    float eng,phy,chem,math,comp, total, result;
    printf("Enter the 5 subject marks 50 outOFF::");
    scanf("%f%f%f%f%f",&eng,&phy,&chem,&math,&comp);

    total=eng+phy+chem+math+comp;
    result=(total/250)*100;

    if(result>=90)
    {
        printf("Total Mark=%.2f,\nPercentage=%.2f,\nGrade= A+",total,result);
    }
    else if(result >=80 && result <=89)
    {
         printf("Total Mark=%.2f,\nPercentage=%.2f,\nGrade= A",total,result);
    }
    else if(result >=70 && result <=79)
    {
         printf("Total Mark=%.2f,\nPercentage=%.2f,\nGrade= B+",total,result);
    }
    else if(result >=60 && result <=69)
    {
         printf("Total Mark=%.2f,\nPercentage=%.2f,\nGrade= B",total,result);
    }
    else if(result >=50 && result <=59)
    {
         printf("Total Mark=%.2f,\nPercentage=%.2f,\nGrade= C",total,result);
    }
    else
    {
         printf("Total Mark=%.2f,\nPercentage=%.2f,\nGrade= Fail!!!",total,result);
    }

        return 0;


}