#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,c,d;
    printf("Enter three Numbers");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0)
    printf("Real and Distict Root");
    else if(d==0)
    printf("Real and Equal Roots");
    else
    printf("Imaginary Roots");

    printf("\n");
    return 0;
}