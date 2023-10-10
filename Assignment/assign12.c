#include <stdio.h>
// Q1 int main()
// {
//     int i = 1, n;
//     printf("Enter value of n");
//     scanf("%d",&n);
//     while (i <= n)
//     {
//         printf("MySirG\n");
//         i++;
//     }
//     printf("\n");
//     return 0;
// }
// Q2 int main()
// {
//     int i = 1, n;
//     printf("Enter value of n");
//     scanf("%d",&n);
//     while (i <= n)
//     {
//         printf("%d\n",i);
//         i++;
//     }
//     printf("\n");
//     return 0;
// }
// Q3 int main()
// {
//     int i = 1, n;
//     printf("Enter value of n");
//     scanf("%d",&n);
//     while (i <= n)
//     {
//         printf("%d\n",n+1-i);
//         i++;
//     }
//     printf("\n");
//     return 0;
// }
// Q4 int main()
// {
//     int i=1,n;
//     printf("Enter a number ");
//     scanf("%d",&n);
//     while(i<=n)
//     {
//         printf("%d ",2*i-1);
//         i++;
//     }
//     printf("\n");
//     return 0;
// }
// Q 5int main()
// {
//     int i=1,n;
//     printf("Enter a number ");
//     scanf("%d",&n);
//     while(i<=n)
//     {
//         printf("%d ",2*n+1-2*i);
//         i++;
//     }
//     printf("\n");
//     return 0;
// }
// Q6 int main()
// {
//     int i=1,n;
//     printf("Enter a number ");
//     scanf("%d",&n);
//     while(i<=n)
//     {
//         printf("%d ",2*i);
//         i++;
//     }
//     printf("\n");
//     return 0;
// }
// Q7 int main()
// {
//     int i=1,n;
//     printf("Enter a number ");
//     scanf("%d",&n);
//     while(i<=n)
//     {
//         printf("%d ",2*n+2-2*i);
//         i++;
//     }
//     printf("\n");
//     return 0;
// }
// Q8 int main()
// {
//     int i=1,n;
//     printf("Enter a number ");
//     scanf("%d",&n);
//     while(i<=n)
//     {
//         printf("%d ",i*i);
//         i++;
//     }
//     printf("\n");
//     return 0;
// }
// Q9 int main()
// {
//     int i=1,n;
//     printf("Enter a number ");
//     scanf("%d",&n);
//     while(i<=n)
//     {
//         printf("%d ",i*i*i);
//         i++;
//     }
//     printf("\n");
//     return 0;
// }
 int main()
{
    int i=1,n;
    printf("Enter a number ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d x %d = %d\n",n,i,i*n);
        i++;
    }
    printf("\n");
    return 0;
}