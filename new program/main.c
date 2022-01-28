// absolute value program

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int bn;
    printf("enter your number:   \n");
    scanf("%d",&bn);
    if (bn>=0) {
        printf("absolute value of your number is %d\n",bn);
        
        
    }
    else if (bn<0){
        bn=abs(bn);
        printf("absolute value of your number is %d\n",bn,abs(bn));
    }
    return 0;
}
