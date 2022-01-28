#include <stdio.h>
int main()
{
    int i=0,n,j;
    printf("enter a number:  ");
    scanf("%d",&n);
    do{
        printf("%d\n",i);
        j=i++;
        printf("%d\n",i+j);
        
        
    }while((i+j)<n);
    return 0;
}
