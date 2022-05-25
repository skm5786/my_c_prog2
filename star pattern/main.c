#include <stdio.h>

int main()
{
    int i,k,n;
    printf("enter number of lines\n");
    scanf("%d",&n);
    for (i=1; i<=n; i++) {
        for (k=1; k<=i; k++) {
            printf("*");
        }
        printf("\n");
    }
    scanf("%d",&n);
    for (i=n; i>0; i--) {
        for (k=1; k<=i; k++) {
            printf("*");
        }
        printf("\n");
    }
    
    
    
    
    return 0;
}
