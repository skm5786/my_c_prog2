#include <stdio.h>
int show(int(*)[],int,int);
int main()
{
    int a[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,0,1,6}
    };
    int r=3,c=4;
     show(a,r,c);
    return 0;
}
int show(int(*q)[4],int row, int col){
    int i,j;
    int *p;
    for (i=0; i<row; i++) {
        p=q+i;
        for (j=0; j<col; j++) {
            printf("%d  ",*(p+j));
        }
        printf("\n");
    }
    
    
    return 0;
}
