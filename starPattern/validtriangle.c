#include <stdio.h>
#include <conio.h>

int main()
{
    int a,b,c;
    printf("Enter lenth of side of triangle");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b){
        printf("Side are valid");
    }else{
        printf("Not Valid Triangle");
    }
printf("\n");
return 0;
}