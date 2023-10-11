#include <stdio.h>
// Q1 int main()
// {
//     int i, j;
//     for (i = 1; i <= 5; i++)
//     {
//         for (j = 1; j <= 5; j++)
//         {
//             if(j<=i)
//             printf("*");
//             else
//             printf(" ");
//         }
//         printf("\n");

//     }
// }
// Q2 int main()
// {
//     int i, j;
//     for (i = 1; i <= 5; i++)
//     {
//         for (j = 1; j <= 5; j++)
//         {
//             if (j>=6-i)
//                 printf("*");
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
// }
// Q3 int main()
// {
//     int i, j;
//     for (i = 1; i <= 5; i++)
//     {
//         for (j = 1; j <= 5; j++)
//         {
//             if (j<=6-i)
//                 printf("*");
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
// }
// Q4 int main()
// {
//     int i, j;
//     for (i = 1; i <= 5; i++)
//     {
//         for (j = 1; j <= 5; j++)
//         {
//             if (j>=i)
//                 printf("*");
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
// }
// Q5 int main()
// {
//     int i, j;
//     for (i = 1; i <= 5; i++)
//     {
//         for (j = 1; j <= 5; j++)
//         {
//             if (j<=i)
//                 printf("%d",j);
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
// }
// Q6 int main()
// {
//     int i, j;
//     for (i = 1; i <= 4; i++)
//     {
//         for (j = 1; j <= 4; j++)
//         {
//             if (j<=i)
//                 printf("%d",i-j+1);
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
// }
// Q7 int main()
// {
//     int i, j;
//     char k;
//     for (i=1;i<=5;i++)
//     {
//         k='A';
//         for (j=1;j<=5;j++)
//         {
//             if (j>=i)
//                 printf("%c",k++);
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
// }
// int main()
// {
//     int i,j,k=1;
//     for (i=1;i<=4;i++)
//     {
//         for (j=1;j<=4;j++)
//         {
//             if (j<=i)
//                 printf("%d",k++);
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
// }
// Q9 int main()
// {
//     int i,j;
//     char k;
//     for (i=1;i<=5;i++)
//     {k='A'+i-1;
//         for (j=1;j<=5;j++)
//         {
//             if (j>=i)
//                 printf("%c",k++);
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
// }
int main()
{
    int i,j;
    for (i=1;i<=5;i++)
    {
        for (j=1;j<=5;j++)
        {
            if (i==1 || i==5 || j==1 || j==5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}