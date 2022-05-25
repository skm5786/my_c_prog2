
#include <stdio.h>

int main()
{
    int a,*ptr;
    a=3;
    ptr=&a;
    printf("%d\n",a);
    printf("%d\n",ptr);
   
    printf("%d\n",ptr+1);
    printf("%d\n",*(ptr)+(*(ptr+1)));
    return 0;
}
