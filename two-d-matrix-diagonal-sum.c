#include <stdio.h>

int main() {
    int i,j,mat1[3][3],mat2[3][2],mat3[3][2],sum=0;


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
    


    //sum of diagonal element:

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==j){
                sum= sum + mat1[i][j];
            }
           
        }
        printf("\n");
    }
    printf("sum of diagonal elements:%d",sum);
    return 0;
}