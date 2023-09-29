#include <stdio.h>
#include <conio.h>

int main()
{
    int x;
    printf("Enter three digit Number");
    scanf("%d",&x);
    printf("\n Before rotation number is %d",x);
    x=x%10*100+x/10;
    printf("\n After rotation number is %d",x);

   printf("\n");
   return 0;
}