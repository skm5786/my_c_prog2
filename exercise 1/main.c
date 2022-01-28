// colinearity of 3 points program
#include <stdio.h>

int main()
{
float X1,X2,X3,Y1,Y2,Y3,m1,m2;
printf("x coordinate of 1st point:  \n ");
    scanf("%f",&X1);
    printf("y coordinate of 1st point:  \n ");
    scanf("%f",&Y1);
    printf("x coordinate of 2nd point:  \n ");
    scanf("%f",&X2);
    printf("y coordinate of 2nd point:  \n ");
    scanf("%f",&Y2);
    printf("x coordinate of 3rd point:  \n ");
    scanf("%f",&X3);
    printf("y coordinate of 3rd point:  \n ");
    scanf("%f",&Y3);
    m2=(Y3-Y2) / (X3-X2) ;
    m1=(Y2-Y1) / (X2-X1) ;
    if ( m2==m1  ) {
        printf("3 points are colinear\n");
    }
    else 
    printf("3 points are not colinear\n");
    return 0;
}




