#include <stdio.h>

int main()
{
    int arr[6];
    int i,temp;
    printf("enter array element\n");
    for (i=0; i<6; i++) {
        scanf("%d\n",arr+i);
    }
    printf("array before change\n");
    for (i=0; i<6; i++) {
        printf("%d\n",*(arr+i));
    }
    temp=arr[0];
    for (i=0; i<5; i++) {
        *(arr+i)=*(arr+i+1);
    }
    arr[5]=temp;
    printf("array after change\n");
    for (i=0; i<6; i++) {
        printf("%d\n",*(arr+i));
    }
    return 0;
}
