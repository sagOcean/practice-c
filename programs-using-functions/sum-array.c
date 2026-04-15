#include <stdio.h>

int arr_sum(int a[],int n){

    int i,sum=0;

    for(i=0;i<n;i++){
        sum+= a[i];
    }
    return sum;
}

int main() {
    int elements;
    printf("how many numbers do you want in an array?\n");
    scanf("%d",&elements);

    int arr[elements];
    printf("enter array elements:");

    int x;
    for(x = 0;x<elements;x++){
        scanf("%d",&arr[x]);
        
    }
    

    int n = sizeof(arr)/sizeof(int);

    int el = arr_sum(arr,n);

    printf("sum of array elements:%d",el);


    return 0;
}