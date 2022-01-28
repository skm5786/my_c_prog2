// prize distribution program
// objective maths and physics pass = 45 rupees
// maths = 10 rupees
// physics = 10 rupees
#include <stdio.h>
int main(){
    int status1,status2;
    printf("status of math:  \n");
    scanf("%d",&status1);
    printf("status of physics:  \n");
    scanf("%d",&status2);
    if (status1==1) {
        if (status2==1) {
            printf("you have won 45 rupees...\n");
        }
            else if (status2==0){
                printf("you have won 10 rupees...\n");
            }
        }
    else if (status1==0){
           
             if (status2==1) {
                printf("you have won 10 rupees...\n");
                
            }
            else if (status2==0){
                printf("nil\n");
                
            }
        }
    return 0;
    }



    
    



