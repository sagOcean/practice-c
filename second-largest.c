#include <stdio.h>


int main() {
    int arr[5] = {35, 31, 38, 32, 39};
    int i;

    // Initialize to the smallest possible integer
    int largest = 1;
    int second = 0;

    for(i = 0; i < 5; i++) {
        if (arr[i] > largest) {
            // The old largest is now the second largest
            second = largest; 
            largest = arr[i];
        } 
        else if (arr[i] > second && arr[i] != largest) {
            // If it's not bigger than largest, check if it beats second
            second = arr[i];
        }
    }
   

    printf("Second largest: %d", second);
    return 0;
}