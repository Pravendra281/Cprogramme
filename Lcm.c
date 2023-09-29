#include <stdio.h>
#include <conio.h>
int main()
{
    int a,b,L;
    printf("Enter your Number");
    scanf("%d%d",&a,&b);
  for(L=a>b?a:b;L<=a*b;L++)
       if(L%a==0&&L%b==0)
         break;
  printf("Lcm of two number is %d",L);
  printf("\n");
  return 0;
}