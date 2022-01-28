// vote verifier program
// only people from 18 to 80 of age can vote.
#include<stdio.h>
int main(){
    int age;
    printf("enter your age: \n");
    scanf("%d",&age);
    printf("your age is %d\n",age);
    if ((void)(age>=18),age<=80) {
        printf("you can vote!\n");
        
    }
    else{
        printf("you cannot vote!\n ");
    }
    return 0;
}
