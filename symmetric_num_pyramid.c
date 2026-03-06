// #include <stdio.h>

// int main() {
//     int i,j;

    

//     for(i=1;i<=5;i++)
//     {
//         for(j=1;j<=5-i;j++)
//         {
//         printf(" ",5-j);
//         }
//         for(j=1;j<=i;j++){
            
//             printf("%d ",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }
#include <stdio.h>

int main() {
    int i, j, space, rows = 5;

    for (i = 1; i <= rows; i++) {

        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}
