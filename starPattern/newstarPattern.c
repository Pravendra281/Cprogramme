#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k;
    
    for (i=1;i<=5;i++){
        i<=3?k++:k--;

        for (j=1;j<=5;j++){
            if(j>=4-k&&j<=2+k)
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