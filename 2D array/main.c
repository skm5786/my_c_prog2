#include <stdio.h>

int main(){
    int i,j,w[4][2];
    for (i=0; i<4; i++) {
        printf("enter subject code and marks\n");
        scanf("%d%d",&w[i][0],&w[i][1]);
        
    }
    for (j=0; j<4; j++) {
        printf("%d  %d\n",w[j][0],w[j][1]);
    }
    return 0;
}
