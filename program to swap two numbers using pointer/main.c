#include <stdio.h>

int main()
{
    int a,b,  *c,*d;
    a=4;
    b=5;
    c=&a;
    d=&b;
    *d=*c;
    printf("%d\n",d);
    printf("%d\n",*d);
 return 0;
}
