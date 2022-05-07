#include <stdio.h>

int main()
{
    int i,n,a,b,c;
    printf("enter number of terms\n");
    scanf("%d",&n);
   
    for (a=0,b=1,i=0; i<=n; i++) {
        c=a+b;
        
        printf("%d, ",a);
        a=b;
        b=c;
        
       
    }
    return 0;
}
