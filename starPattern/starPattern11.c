#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for (i=1;i<=4;i++){
       
        for (j=1;j<=7;j++){
            if(j>=i&&j<=8-i)
            {
               printf("*");
               
            }
            else
            {
                printf(" ");
            
            }
            
        }printf("\n");
      
    }  printf("\n");
        return 0;
}