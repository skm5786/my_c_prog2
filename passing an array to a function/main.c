#include <stdio.h>
int initializer(int *,int);
int modify(int*,int);
int main()
{
    int n,i;
    
    printf("enter number of elements you want in array:\n");
    scanf("%d",&n);
    int arr[n];
    initializer(arr, n);
    modify(arr,n);
    printf("\n");
    for (i=0; i<=n-1; i++) {
        printf("%d\n",*(arr+i));
    }
    return 0;
}
int initializer(int*a,int n){
    int i;
    for (i=0; i<=n-1; i++) {
        printf("enter element %d\n",i);
        scanf("%d",a+i);
    }
    
    return 0;
}
int modify(int*a,int n){
    int i;
    for (i=0; i<=n-1; i++) {
        *(a+i)=3*(*(a+i));
    }
    return 0;
}
