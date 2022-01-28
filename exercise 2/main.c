//switch control statements
//simple program

#include<stdio.h>
int main()
{
    int age,marks;
    printf("enter your age: \n");
    scanf("%d",&age);
    switch (age) {
        case 15:
            printf("enter your marks:  \n");
            scanf("%d",&marks);
            switch (marks) {
                case 45:
                    printf("your marks are 45\n");
                    break;
                    
                default:
                    printf("your marks are not 45\n");
                    break;
            }
            break;
          
                case 30:
                    printf("your age is 30 years\n");
                    break;
        default:
            printf("your age is not 15,20\n");
            break;
                    
              
    }
    return 0;
            
      
    }
    
    
    

