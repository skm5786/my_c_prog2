#include <stdio.h>

int main()
{
    int a[5][5]={
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,45,14,15},
        {16,17,18,20,19},
        {25,24,13,22,21}
    };
    int i,j,max;
    max=a[0][0];
    for (i=0; i<5; i++) {
        for (j=0; j<5; j++) {
            if (a[i][j]>max) {
                max=a[i][j];
            }
        }
    }
    printf("%d\n",max);
    return 0;
}
