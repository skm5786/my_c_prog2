#include <stdio.h>

int main()
{
    int a=2,b=3,c,*pa,*ps;
    pa=&a;
    ps=&b;
    c=*pa+*ps;
    printf("%d\n",c);
    return 0;
}

