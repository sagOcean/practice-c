#include <stdio.h>

int main() {
    int i,j,mat1[3][3];


    //matrix-1

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("enter matrix1[%d][%d]:\n",i,j);
            scanf("%d",&mat1[i][j]);
        }
        printf("\n");
    }

    //printing matrix-1
    printf("matrix-1:\n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",mat1[i][j]);
           
        }
        printf("\n");
    }

    // changing row to column
    printf("transpose:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",mat1[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}