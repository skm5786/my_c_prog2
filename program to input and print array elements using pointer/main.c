#include <stdio.h>

int main()
{
    int a[]={76,87,89};
    int i,*ptr;
    ptr=&a[0];
   
    for (i=0; i<=2; i++) {
        printf("%d,  ",ptr);
        
        printf("%d,  ",*ptr);

        ptr++;
        
    }
    
  
    return 0;
}
