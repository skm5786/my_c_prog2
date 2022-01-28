//roots of quadratic equation

#include <stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    float root1,root2;
    
    printf("enter coffecient of x**2,x,x**0:  \n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    d=(b*b)-(4*a*c);
    switch (d>=0) {
        case 1:
            root1=(-b+sqrt(d))/2*a;
            root2=(-b-sqrt(d))/2*a;
            printf("two roots are:%f,%5f\n",root1,root2);
            
            break;
            
        default:
            printf("real roots doesn't exist\n");
            break;
    }
    return 0;
}
