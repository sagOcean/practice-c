#include <stdio.h>

int main() {
    
    int arr[5] = {34,56,21,67,9};
    int i,j,temp;
    int n = 5;


    for(i=0;i<5;i++){
        for(j=0;j<n-1;j++){

            if(arr[j]>arr[j+1]){
                temp  = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                
            }
            
        }
        n--;
    }
    for(i=0;i<5;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}