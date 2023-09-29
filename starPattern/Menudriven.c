#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
int main()
{
    int a,b,x;
    while(1){
    printf("\n1. Addition");
     printf("\n2. Substraction");
      printf("\n3. Multiplication");
       printf("\n4. Division");
       printf("\n5. Exit");
       printf("\n\nEnter Your Choice");
    scanf("%d",&x);
    switch (x)
    {
    case 1:
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    printf("Addition of two number is %d",a+b);
    break;
      case 2:
      printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    printf("Difference of two number is %d",a-b);
    break;
        case 3:
        printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    printf("Multiplication of two number is %d",a*b);
    break;
          case 4:
       printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    printf("Division of two number is %d",a/b);
    break;
    case 5:
    exit(0);
    
    default:
    printf("\n Invalid Choice");
        
    }
    }/*End od while loop for continuous running*/
    printf("\n");
    return 0;
 }