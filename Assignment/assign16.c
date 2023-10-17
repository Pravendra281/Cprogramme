#include <stdio.h>
/*Nth term of Fibonnaci series */
// Q1 int main()
// {
// int a,b,c,n;
// printf("Term to print of Fibonnaci:");
// scanf("%d",&n);
// for (a=-1,b=1;n;n--)
// /*series is 0,1,1,2,3,5...so first term is 0 so a+b must be zero thats why a=-1 b=1*/
// {c=a+b;
// a=b;
// b=c;}
// printf("%d",c);
// printf("\n");
// return 0;
// }

/*first N term of Fibonnaci series*/
// Q2 int main()
// {
//     int a, b, c, n;
//     printf("How many term of Fibonnaci series :");
//     scanf("%d",&n);
//     for (a=-1,b=1;n;n--)
//     /*series is 0,1,1,2,3,5...so first term is 0 so a+b must be zero thats why a=-1 b=1*/
//     {
//         c=a+b;
//         printf("%d ",c);
//         a=b;
//         b=c;
//     }

//     printf("\n");
//     return 0;
// }

/*check whether a given no is in Fibonacci or not */
// int main()
// {
//     int a,b,c=0,x,n;
//     printf("Enter a number: ");
//     scanf("%d",&x);
//     for (a=-1,b=1;c<=x;n--)
//     /*series is 0,1,1,2,3,5...so first term is 0 so a+b must be zero thats why a=-1 b=1*/
//     {
//         if (c==x)
//         {
//             printf("%d is in Fiboncci series ");
//             break;
//         }
//         c=a+b;
//         printf("%d ",c);
//         a=b;
//         b=c;
//     }
//   if(c!=x)
//   printf("%d is not in Fibonnacci series");
//     printf("\n");
//     return 0;
// }
/*Armstrong Number 125 here n=3 so 1^3+2^3+5^3=1+8+125=134 so 134!=125*/
int main()
{
int p,x,y,n,r,s=0,i;
printf("Enter a Number: ");
scanf("%d",&x);
/*wants to change in y as x cann't change*/
y=x;
for(n=0;y;y/=10,n++);
/*y; jab tak 0 na ho y/=10 mein decrement*/
y=x;
/*y mein 0 ho gaya islye dubara x copy kiye*/
while(y)
{
/*r is remainder*/
r=y%10;
for(p=1,i=1;i<=n;i++)
{
/*p=product*/
p=p*r;
}
s=s+p;
y=y/10;
}
if(s==x)
{
    printf("%d is an Armstrong number",x);
    
}
else
    printf("%d is not Armstring",x);
    printf("\n");
    return 0;
}