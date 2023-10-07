#include<stdio.h>
#include<conio.h>

// Q1 int main()
// {
//     printf("size=%lu",sizeof('A'));
//     printf("\n");
//     return 0;
// }
// Q2 int main()
// {
//     printf("size=%lu",sizeof(3.45));
//     printf("\n");
//     return 0;
// }
// Q3 int main()
// {
//     char m='A';
//     ++m;
//     printf("%c",m);
//     printf("\n");
//     return 0;
// }
// Q4 int main()
// {
//     int a=5,b=6,c;
//     c=a;
//     a=b;
//     b=c;
//     printf("%d %d",a,b);
//     printf("\n");
//     return 0;
// }

// Swap without 3rd variable
// Q5 int main()
// {
//     int a=10,b=20;
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("%d %d",a,b);
//     printf("\n");
//     return 0;
// }
// swap with 3rd variable and without +- operator
// Q6 int main()
// {
//     int a=10,b=20;
//     a=a*b;  /* 200*/
//     b=a/b; /*10 */
//     a=a/b; /* 20*/
//     printf("%d %d",a,b);
//     printf("\n");
//     return 0;
// }

/*Without 3rd variable and arthmetic operator*/
// Q7 int main()
// {
//     int a=10,b=20;
//     a=a^b; 
//     b=a^b; 
//     a=a^b; 
//     printf("%d %d",a,b);
//     printf("\n");
//     return 0;
// }
int main()
{
    int a=10,b=20;
    b=a+b-(a=b) ;
    printf("%d %d",a,b);
    printf("\n");
    return 0;
}