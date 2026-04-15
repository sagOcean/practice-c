#include <stdio.h>

int main() {
    int i,j,mat1[3][2],mat2[3][2],mat3[3][2];


    //matrix-1

    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("enter matrix1[%d][%d]:\n",i,j);
            scanf("%d",&mat1[i][j]);
        }
        printf("\n");
    }

    //printing matrix-1
    printf("matrix-1:\n");

    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("%d\t",mat1[i][j]);
           
        }
        printf("\n");
    }
    //matrix-2

    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("enter matrix2[%d][%d]:\n",i,j);
            scanf("%d",&mat2[i][j]);
        }
        printf("\n");
    }

    //printing matrix-2
    printf("matrix-2:\n");

    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("%d\t",mat2[i][j]);
           
        }
        printf("\n");
    }


    

    
    
    return 0;
}