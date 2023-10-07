#include<stdio.h>
// Q1 int main()
// {
//     int a,b,c,sum;
//     printf("Enter three Number");
//     scanf("%d%d%d",&a,&b,&c);
//     sum=a+b+c;
//     printf("Sum of three Number is %d",sum);
//     printf("\n");
//     return 0;
// }

// Q2 int main()
// {
//     char ch='+';
//   printf("%d",ch);
//     printf("\n");
//     return 0;
// }
// Q3 int main()
// {int x;
// float y;
// char z;
// double a;
//    printf("%lu",sizeof(x));
//    printf("\n%lu",sizeof(y));
//    printf("\n%lu",sizeof(z));
//    printf("\n%lu",sizeof(a));
//    printf("\n");
//     return 0;
// }
// Q4 int main()
// {int x;
//   printf("Enter a Number");
//   scanf("%d",&x);
//   x=x/10*10;
//   printf("%d",x);
//     printf("\n");
//     return 0;
// }
int main()
{int x,digit;
  printf("Enter a Number");
  printf("Enter a digit");
  scanf("%d%d",&x,&digit);
  x=x*10+digit;
  printf("%d",x);
    printf("\n");
    return 0;
}