


#include <stdio.h>

int main() 
{
    
/*
wap to create matrix of particular dimension according to the user.

    int A[10][10];
    int i,j,a,b;

    printf("how many rows do you want?\n");
    scanf("%d",&a);

    printf("how many columns do you want?\n");
    scanf("%d",&b);

    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("A[%d][%d]:\n",i+1,j+1);
            scanf("%d",&A[i][j]);
        }
    }

    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("%d\t",A[i][j]);
    }
        printf("\n");
    }
  
*/  

/*
wap to add two matrices of dimensions entered by the user

    int A[10][10],B[10][10],C[10][10];
    int i,j,a,b;
    // matrix A
    printf("how many rows do you want?\n");
    scanf("%d",&a);

    printf("how many columns do you want?\n");
    scanf("%d",&b);

    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("A[%d][%d]:\n",i+1,j+1);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\nMatrix A:\n");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("%d\t",A[i][j]);
    }
        printf("\n");
    }

    // matrix b
    
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("B[%d][%d]:\n",i+1,j+1);
            scanf("%d",&B[i][j]);
        }
    }
    printf("\nMatrix B:\n");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("%d\t",B[i][j]);
    }
        printf("\n");
    }

    // C = A + B
    
    printf("\nMatrix C:\n");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("%d\t",A[i][j]+B[i][j]);
    }
        printf("\n");
    }
    */

    /* 
    wap to do matrix subtraction of two matrices entered by the user.
    
    int A[10][10],B[10][10],C[10][10];
    int i,j,a,b;
    // matrix A
    printf("how many rows do you want?\n");
    scanf("%d",&a);

    printf("how many columns do you want?\n");
    scanf("%d",&b);

    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("A[%d][%d]:\n",i+1,j+1);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\nMatrix A:\n");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("%d\t",A[i][j]);
    }
        printf("\n");
    }

    // matrix b
    
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("B[%d][%d]:\n",i+1,j+1);
            scanf("%d",&B[i][j]);
        }
    }
    printf("\nMatrix B:\n");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("%d\t",B[i][j]);
    }
        printf("\n");
    }

    // C = A - B
    
    printf("\nMatrix C:\n");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("%d\t",A[i][j]-B[i][j]);
    }
        printf("\n");
    }

    */


   /*
    wap to do multiplication of two matrices
    int A[3][3], B[3][3], C[3][3];
    int i, j, k;

    // Input for Matrix A
    printf("Enter elements for Matrix A (3x3):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input for Matrix B
    printf("Enter elements for Matrix B (3x3):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initializing Matrix C (Result) to 0 and performing Multiplication
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            C[i][j] = 0; // Clear the spot before adding
            for(k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Displaying the Result
    printf("\nResultant Matrix (A * B):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
    */

    return 0;
}