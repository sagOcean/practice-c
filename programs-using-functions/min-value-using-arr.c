#include <stdio.h>

int min(int arr[],int n){
    int smallest = arr[0];
    int i;

    for(i=1;i<n;i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }
    return smallest;
}

int main() {
    
    int arr[20];

    int x;
    for(x = 0;x<10;x++){
        printf("enter:");
        scanf("%d",&arr[x]);
    }

    

    
   

    int smallest_num = min(arr,10);

    printf("smallest number in the array is: %d",smallest_num);

    return 0;
}