#include <stdio.h>
#include <conio.h>
int main()
{
    int i=1,num;
    printf("Enter your Number");
    scanf("%d",&num);
  while (i<=num)
  {
    printf("%d ",2*i-1);
    i++;
  }
  printf("\n");
  return 0;
}
