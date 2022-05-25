//Write a program that interchanges the odd and even elements of an array.
#include <stdio.h>
int swap(int *,int*);
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int i;
    for (i=0; i<9; i+=2) {
        swap(a+i, a+i+1);//here addresses of actual parameters are passed to function implies it is call by refrence
    }
    for (i=0; i<10; i++) {
        printf("%d,",a[i]);
    }
    return 0;
}
int swap(int *p,int*q)
{
    int temp;
    temp=*p;
    *p=*q;
    *q=temp;
    return 0;
}
