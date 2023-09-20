#include<stdio.h>

int main()
{
    int num;
    printf("Enter The Numbe For table ::");
    scanf("%d",&num);

    for (int i = 1; i <= 10; i++)
    {   int ans;
        ans=num*i;
        printf("%d * %d = %d\n",num, i, ans);
    }
    
}