#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    char k;
    for (i=1;i<=4;i++){
        k='A';
        for (j=1;j<=7;j++){
            if(j>=3+i||j<=5-i)
            {
               printf("%c",k);
             j<4?k++:k--; 
            }
            else
            {
                printf(" ");
                if(j==4)
                k--;
            }
            
        }printf("\n");
      
    }  printf("\n");
        return 0;
}