#include<stdio.h>
int main()
{
    int marks;
    printf("Enter Marks of student: ");
    scanf("%d",&marks);

    switch (marks)
    {
     case 90 ... 100:  
            printf("GRADE A");
            break;
      case 80 ... 89:  
            printf("GRADE B");
            break;
        case 70 ... 79:  
            printf("GRADE C");
            break;
        case 60 ... 69:  
            printf("GRADE D");
            break;
       case 50 ... 59:  
            printf("GRADE E");
            break;   
       case 0 ... 49:  
            printf("GRADE F");
            break;                
    default:
    printf("Invalid marks");
        break;
    }
}