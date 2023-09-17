#include<stdio.h>

int main()
{
    int r , c;
    for(r=5;r>=1;r--)
    {
     for(c=5;c>=r;c--)
     {
       printf(" %d",c);
     }
      printf("\n");
    } 
   
    return 0;
}

// // For(r=5;r>=1;r--)
// For(c=5;c>=r;c--)

// #include<stdio.h>

// int main()
// {
//     int r , c;
//     for (r=1;r<=5;r++)
//     {
//      for (c=5;c<=r;c--)
//      {
//        printf(" %d",c);
//      }
//       printf("\n");
//     } 
   
//     return 0;
// }