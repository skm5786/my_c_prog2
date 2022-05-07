#include <stdio.h>
int fib_recursive(int n)
{
    if (n==0||n==1) {
        return n;
    } else {
        return (fib_recursive(n-1)+fib_recursive(n-2));
    }
}
int main()
{
    int a,i;
    printf("enter term number\n");
    scanf("%d",&a);
    for (i=0; i<=a; i++) {
        printf("%d, ",fib_recursive(i));
    }
   
   
    return 0;
    
}

