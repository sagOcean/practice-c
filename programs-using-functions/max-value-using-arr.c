#include <stdio.h>

int max(int arr[],int n){
    int largest = arr[0];
    int i;

    for(i=1;i<n;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    
    int arr[20];

    int x;
    for(x = 0;x<10;x++){
        printf("enter:");
        scanf("%d",&arr[x]);
    }

    

    
   

    int largest_num = max(arr,10);

    printf("largest number in the array is: %d",largest_num);

    return 0;
}