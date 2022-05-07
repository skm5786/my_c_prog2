#include <stdio.h>

int main()
{
    int i;
    int *j,**p;
    i=3;
    j=&i;
    p=&j;
    printf("value of i %d\n",i);
    printf("value of i %d\n",*j);
    printf("value of i %d\n",**p);
    printf("address of i %p\n",&i);
    printf("address of i %p\n",j);
    printf("value of i %d\n",*j);
    printf("address of j %p\n",&j);
    printf("address of i %p\n",*p);
    printf("address of j %p\n",p);
    printf("address of p %p\n",&p);
    return 0;
}
