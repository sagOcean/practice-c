/* pattern 1
*
* * 
* * * 
* * * * 
* * * * *

*/

/*pattern 2
5 
5 4 
5 4 3 
5 4 3 2 
5 4 3 2 1
*/

/*pattern 3
5 4 3 2 1 
5 4 3 2 
5 4 3 
5 4 
5 
*/

/*pattern 4
1 
2 2 
3 3 3
4 4 4 4
5 5 5 5 5
*/






#include<stdio.h>

int main(){

    int i,j;
    // for(i=1;i<=5;i++){
    //     for(j=1;j<=i;j++){       
    //         printf("* ",j);
    //     }
    //     printf("\n");
    // }


    // for(i=5;i>=1;i--){
    //     for(j=5;j>=i;j--){
    //         printf("%d ",j);
    //     }
    //     printf("\n");
    // }
    

    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
    



    return 0;
}