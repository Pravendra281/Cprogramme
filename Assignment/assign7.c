#include<stdio.h>
// Q1 int main()
// {
//     int x;
//     printf("Enter a Number ");
//     scanf("%d",&x);
//     if(x>0)
//     printf("Positive");
//     else
//     printf("Non Positive");

//     printf("\n");
//     return 0;
// }
// Q2 int main()
// {
//     int x;
//     printf("Enter a Number ");
//     scanf("%d",&x);
//     if(x%5)
//     printf("Non Divisible by 5");
//     else
//     printf("Divisible by 5");

//     printf("\n");
//     return 0;
// }
// Q3 int main()
// {
//     int x;
//     printf("Enter a Number ");
//     scanf("%d",&x);
//     if(x%2==0)
//     printf("Even");
//     else
//     printf("Odd");

//     printf("\n");
//     return 0;
// }
// Q4 int main()
// {
//     int x;
//     printf("Enter a Number ");
//     scanf("%d",&x);
//     if(x/2*2==x)
//     printf("Even");
//     else
//     printf("Odd");

//     printf("\n");
//     return 0;
// }
int main()
{
    int x;
    printf("Enter a Number ");
    scanf("%d",&x);
    if(x&1)
    printf("Odd");
    else
    printf("Even");

    printf("\n");
    return 0;
}