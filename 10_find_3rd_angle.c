//10. WAP to calculate the third angle when two angles are input through the keyboard. 
#include<stdio.h>

int main()
{
    int ang1, ang2, ang3;

    printf("Enter Tow angle Of Trangel ::");
    scanf("%d%d",ang1,ang2);

    ang3=180-(ang1+ang2);

    printf("Third angle of Trangle =%d", ang3);

    return 0;
}

