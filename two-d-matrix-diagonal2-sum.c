#include <stdio.h>

int main() {

    int i,j,mat2[3][3],sum=0;
    //matrix-2

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("enter matrix2[%d][%d]:\n",i,j);
            scanf("%d",&mat2[i][j]);
        }
        printf("\n");
    }

    //printing matrix-2
    printf("matrix-2:\n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",mat2[i][j]);
           
        }
        printf("\n");
    }

    //printing sum of other diagonal

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i+j==2){
                sum = sum + mat2[i][j];
            }
           
        }
        printf("\n");
    }
    printf("sum:%d",sum);


    return 0;
}