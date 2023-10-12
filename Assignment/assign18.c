#include <stdio.h>
// Q1 int main()
// {
//     int i,j;
//     for(i=1;i<=4;i++)
//     {
//         for(j=1;j<=7;j++)
//         {
//          if(j>=5-i&&j<=3+i)
//          printf("*");
//          else
//          printf(" ");
//         }
//         printf("\n");
//     }
// }
// Q2 int main()
// {
//     int i,j;
//     for(i=1;i<=4;i++)
//     {
//         for(j=1;j<=7;j++)
//         {
//          if(j>=i&&j<=8-i)
//          printf("*");
//          else
//          printf(" ");
//         }
//         printf("\n");
//     }
// }
// Q3 int main()
// {
//     int i,j,k;

//     for(i=1;i<=5;i++)
//     {
//         k=1;
//         for(j=1;j<=9;j++)
//         {
//             if(j>=6-i&& j<=3+i &&k)
//             {
//                 printf("*");
//                 k=0;
//             }
//             else{
//                 printf(" ");
//                 k=1;
//             }           
//         }
//         printf("\n");
//     }
// }
// Q4 int main()
// {
//     int i, j, k;
//     for(i=1;i<=4;i++)
//     {
//         k=1;
//         for(j=1;j<=7;j++)
//         {
//             if(j>=5-i&&j<=3+i)
//             {
//                 printf("%d",k);
//                 j<4?k++:k--;
//             }
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
// }
// Q5 int main()
// {
//     int i, j;
//     char k;
//     for(i=1;i<=4;i++)
//     {
//         k='A';
//         for(j=1;j<=7;j++)
//         {
//             if(j>=i&&j<=8-i)
//             {
//                 printf("%c",k++);
              
//             }
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
// }
// Q6 int main()
// {
//     int i, j;
//     char k;
//     for(i=1;i<=4;i++)
//     {
//         k='A';
//         for(j=1;j<=7;j++)
//         {
//             if(j>=i&&j<=8-i)
//             {
//                 printf("%c",k);
//                 j<4?k++:k--;
//             }
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
// }
// Q7 int main()
// {
//     int i,j,x,k;
    
//     for(i=1;i<=5;i++)
//     {
//         k=1;
//         x=1;
//         for(j=1;j<=9;j++)
//         {
//             if(j>=6-i&& j<=4+i)
//             {
//                 if(x){
//                     printf("%d",k);
//                     j<5?k++:k--;
//                 }
//                 else{
//                     printf(" ");
//                     if(j==5)
//                         k--;
//                 }
//                 x=1-x;
//             }
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
// }
// Q8 int main()
// {
//     int i,j;
    
//     for(i=1;i<=4;i++)
//     {
//         for(j=1;j<=7;j++)
//         {
//             if(j>=3+i|| j<=5-i)
//             {
//             printf("*");
//             }
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
// }
// Q9 int main()
// {
//     int i,j,k;
    
//     for(i=1;i<=4;i++)
//     {k=1;
//         for(j=1;j<=7;j++)
//         { 
//             if(j>=3+i||j<=5-i)
//             {
//             printf("%d",k);
//               j<4?k++:k--;
//             }
//             else
//                 {printf(" ");
//                 if(j==4)
//                     k--;}
//         }
//         printf("\n");
//     }
// }
int main()
{
    int i,j;
    char k;
    
    for(i=1;i<=4;i++)
    { k='A';
        for(j=1;j<=7;j++)
        { 
            if(j>=3+i||j<=5-i)
            {
            printf("%c",k);
              j<4?k++:k--;
            }
            else
                {printf(" ");
                if(j==4)
                    k--;}
        }
        printf("\n");
    }
}