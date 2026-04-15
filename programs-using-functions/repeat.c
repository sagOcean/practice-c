#include <stdio.h>

int main() {
    int arr[10]= {1,2,3,4,5,6,6,6,7,7};
    int i,j;
    int repeated_num;
    int count=0;

    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(arr[i]==arr[j]){
                printf("repeated number:%d\n",arr[i]);
                count++;
            }
        }
    }
    // printf("repeated num:%d",repeated_num);
    printf("%d",count);
    return 0;
    
}