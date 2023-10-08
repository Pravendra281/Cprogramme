#include <stdio.h>
// Q1 int main()
// {
//     int x;
//     printf("Enter a three digit Number");
//     scanf("%d",&x);
//     if (x>99<1000 ||x>-1000 && x<-99)
//         printf("Number is of three digit");
//     else
//         printf("Number not three digit");
//     printf("\n");
//     return 0;
// }
// Q2 int main()
// {
//     int x,y;
//     printf("Enter two numbers");
//     scanf("%d%d",&x,&y);
//     if (x>y)
//          printf("%d",x);
//     else
//        printf("%d",y);
//     printf("\n");
//     return 0;
// }
// Q3 int main()
// {
//     int a, b, c, D;
//     printf("Enter value of x y z");
//     scanf("%d%d%d", &a, &b, &c);
//     D = b * b - 4 * a * c;
//     if (D > 0)
//         printf("Roots and Real and Distinct");
//     else if (D < 0)
//         printf("Roots are Real and equal");
//     else
//         printf("Roots are Real and Imaginary");

//     printf("\n");
//     return 0;
// }
// Q4 int main()
// {
//     int a;
//     printf("Enter Value of Year");
//     scanf("%d", &a);
//     if (a % 4 == 0)
//         printf("Given year is Leap year");
//     else
//         printf("Not a Leap year");

//     printf("\n");
//     return 0;
// }
int main()
{
    int a,b,c;
    printf("Enter three Numbers");
   scanf("%d%d%d",&a,&b,&c);
   printf("%d",a>b ? a>c?a:c :b>c?b:c);
    printf("\n");
    return 0;
}